package main

func main() {
	MongoConnect()
	defer DisconnectMongo()
	RunService()
}
