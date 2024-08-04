package main

import (
	"context"
	"fmt"
	"math/rand"
	"time"

	"go.mongodb.org/mongo-driver/bson"
	"go.mongodb.org/mongo-driver/bson/primitive"
	"go.mongodb.org/mongo-driver/mongo"
	"go.mongodb.org/mongo-driver/mongo/options"
)

// Team representa a estrutura de um time
type Team struct {
	ID        primitive.ObjectID `json:"id,omitempty" bson:"_id,omitempty"`
	Name      string             `json:"name" bson:"name"`
	Country   string             `json:"country" bson:"country"`
	League    string             `json:"league" bson:"league"`
	Overall   int                `json:"overall" bson:"overall"`
	AtkRating int                `json:"atkRating" bson:"atkRating"`
	MidRating int                `json:"midRating" bson:"midRating"`
	DefRating int                `json:"defRating" bson:"defRating"`
	LogoURL   string             `json:"logoUrl" bson:"logoUrl"`
}

// AddTeam insere um novo time na coleção especificada
func AddTeam(ctx context.Context, collection *mongo.Collection, team Team) error {
	// Insere o documento na coleção
	_, err := collection.InsertOne(ctx, team)
	return err
}

func UpdateTeam(ctx context.Context, collection *mongo.Collection, team Team) error {
	// Definir o filtro para encontrar o documento pelo nome do time
	filter := bson.M{"name": team.Name}
	// Definir os campos a serem atualizados
	update := bson.M{"$set": team}
	// Atualização em si
	_, err := collection.UpdateOne(ctx, filter, update)
	return err
}

func DeleteTeam(ctx context.Context, collection *mongo.Collection, name string) error {
	// Definir o filtro para encontrar o documento pelo nome do time
	filter := bson.M{"name": name}
	// Exclusão em si
	_, err := collection.DeleteOne(ctx, filter)
	return err
}

// SelectRandomTeam seleciona um time aleatório da coleção
func SelectRandomTeam(ctx context.Context, collection *mongo.Collection) (Team, error) {
	var team Team

	// Contar o número de documentos na coleção
	count, err := collection.CountDocuments(ctx, bson.D{})
	if err != nil {
		return team, err
	}

	// Verificar se a coleção está vazia
	if count == 0 {
		return team, fmt.Errorf("A coleção está vazia")
	}

	// Gerar um índice aleatório
	rand.Seed(time.Now().UnixNano())
	randomIndex := rand.Int63n(count)

	// Encontrar o documento no índice aleatório
	options := options.Find().SetSkip(randomIndex).SetLimit(1)
	cursor, err := collection.Find(ctx, bson.D{}, options)
	if err != nil {
		return team, err
	}
	defer cursor.Close(ctx)

	// Ler o documento encontrado
	if cursor.Next(ctx) {
		if err := cursor.Decode(&team); err != nil {
			return team, err
		}
	} else {
		return team, fmt.Errorf("Nenhum documento encontrado")
	}

	return team, nil
}
