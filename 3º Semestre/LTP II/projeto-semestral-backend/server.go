package main

import (
	"fmt"
	"log"
	"net/http"
	"time"
)

type Router struct{}

func (Router) ServeHTTP(res http.ResponseWriter, req *http.Request) {
	ReqCheck(res, req)
}

func RunService() {
	fmt.Print("Server http rodando...")
	s := &http.Server{
		Addr:         ":8080",
		Handler:      enableCors(Router{}), // Aplicação do middleware
		ReadTimeout:  10 * time.Second,
		WriteTimeout: 10 * time.Second,
	}

	log.Fatal(s.ListenAndServe())

}
