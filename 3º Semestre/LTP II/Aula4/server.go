package main 

import (
	"log"
	"net/http"
)

type Luciano struct {}

func (Luciano) ServeHTTP (w http.ResponseWriter, r *http.Request) {	
	path := r.URL.Path
	if path != "/rogerioceni" {
	log.Fatal("Infelizmente aposentou! Muito melhor que Cássio!") //Mensagem de erro, caso seja digitado o path errado//
	}
	w.Write([]byte("Luís Fabiano"))	// Mensagem se deu certo //
}
func main () {
	saopaulo := http.Server {
		Addr : "127.0.0.1:1992",
		Handler : Luciano{},
	}
	log.Fatal(saopaulo.ListenAndServe())
}
