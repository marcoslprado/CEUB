package main

import (
	"context"
	"fmt"
	"log"

	"go.mongodb.org/mongo-driver/mongo"
	"go.mongodb.org/mongo-driver/mongo/options"
)

var collection *mongo.Collection
var Client *mongo.Client // Variável global para usar o client em qualquer arquivo

// MongoConnect configura a conexão com o MongoDB
func MongoConnect() {
	// Configuração para conexão com seu banco de dados MongoDB
	uri := "mongodb+srv://marcoslprado:Pi25Pa32@e-sportsdraftcluster.idjccyr.mongodb.net"
	opts := options.Client().ApplyURI(uri)

	// Criação do client MongoDB
	client, err := mongo.Connect(context.TODO(), opts)
	if err != nil {
		log.Fatal(err)
	}

	// Verificar conexão com o MongoDB
	err = client.Ping(context.TODO(), nil)
	if err != nil {
		log.Fatal(err)
	}

	Client = client // Atribuição à variável global para que possa ser usada em qualquer arquivo
	fmt.Println("Conexão estabelecida com MongoDB!")
}

// DisconnectMongo fecha a conexão com o MongoDB
func DisconnectMongo() {
	err := Client.Disconnect(context.Background())
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Conexão com MongoDB fechada")
}
