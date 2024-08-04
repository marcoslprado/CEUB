package main

import (
	"context"
	"encoding/json"
	"log"
	"net/http"
)

// Mapeia métodos HTTP para funções específicas
var MethodMap = map[string]func(string, http.ResponseWriter, *http.Request){
	"GET":    Get,
	"POST":   Post,
	"PUT":    Put,
	"DELETE": Delete,
}

// Função para lidar com requisições GET
func Get(path string, res http.ResponseWriter, req *http.Request) {
	if path == "/randomTeam" {
		collection := Client.Database("E-SportsDraftCluster").Collection("Teams")
		ctx := context.TODO()

		team, err := SelectRandomTeam(ctx, collection)
		if err != nil {
			http.Error(res, err.Error(), http.StatusInternalServerError)
			return
		}

		res.WriteHeader(http.StatusOK)
		json.NewEncoder(res).Encode(team)
	} else {
		message := ErrorMap[400]
		jsonError, err := json.Marshal(message)
		if err != nil {
			log.Fatal(err)
		}
		res.WriteHeader(http.StatusInternalServerError)
		res.Write(jsonError)
	}
}

// Função para lidar com requisições POST
func Post(path string, res http.ResponseWriter, req *http.Request) {
	if path == "/addTeam" {
		var team Team
		collection := Client.Database("E-SportsDraftCluster").Collection("Teams")
		ctx := context.TODO()

		err := json.NewDecoder(req.Body).Decode(&team)
		if err != nil {
			http.Error(res, "Erro ao decodificar JSON", http.StatusBadRequest)
			return
		}

		err = AddTeam(ctx, collection, team)
		if err != nil {
			http.Error(res, "Erro ao inserir time", http.StatusInternalServerError)
			return
		}

		response := map[string]interface{}{
			"status":  http.StatusCreated,
			"message": "Time adicionado com sucesso",
		}

		res.WriteHeader(http.StatusCreated)
		json.NewEncoder(res).Encode(response)
	} else {
		message := ErrorMap[400]
		jsonError, err := json.Marshal(message)
		if err != nil {
			log.Fatal(err)
		}
		res.WriteHeader(http.StatusInternalServerError)
		res.Write(jsonError)
	}
}

// Função para lidar com requisições PUT
func Put(path string, res http.ResponseWriter, req *http.Request) {
	if path == "/updateTeam" {
		var team Team
		collection := Client.Database("E-SportsDraftCluster").Collection("Teams")
		ctx := context.TODO()

		err := json.NewDecoder(req.Body).Decode(&team)
		if err != nil {
			http.Error(res, "Erro ao decodificar JSON", http.StatusBadRequest)
			return
		}

		err = UpdateTeam(ctx, collection, team)
		if err != nil {
			http.Error(res, "Erro ao atualizar time", http.StatusInternalServerError)
			return
		}

		response := map[string]interface{}{
			"status":  http.StatusOK,
			"message": "Time atualizado com sucesso",
		}

		res.WriteHeader(http.StatusOK)
		json.NewEncoder(res).Encode(response)
	} else {
		message := ErrorMap[400]
		jsonError, err := json.Marshal(message)
		if err != nil {
			log.Fatal(err)
		}
		res.WriteHeader(http.StatusBadRequest)
		res.Write(jsonError)
	}
}

// Função para lidar com requisições DELETE
func Delete(path string, res http.ResponseWriter, req *http.Request) {
	if path == "/deleteTeam" {
		var team Team
		collection := Client.Database("E-SportsDraftCluster").Collection("Teams")
		ctx := context.TODO()

		err := json.NewDecoder(req.Body).Decode(&team)
		if err != nil {
			http.Error(res, "Erro ao decodificar JSON", http.StatusBadRequest)
			return
		}

		err = DeleteTeam(ctx, collection, team.Name)
		if err != nil {
			http.Error(res, "Erro ao excluir time", http.StatusInternalServerError)
			return
		}

		response := map[string]interface{}{
			"status":  http.StatusOK,
			"message": "Time excluído com sucesso",
		}

		res.WriteHeader(http.StatusOK)
		json.NewEncoder(res).Encode(response)
	} else {
		message := ErrorMap[400]
		jsonError, err := json.Marshal(message)
		if err != nil {
			log.Fatal(err)
		}
		res.WriteHeader(http.StatusBadRequest)
		res.Write(jsonError)
	}
}
