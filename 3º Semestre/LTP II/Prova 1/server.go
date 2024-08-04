package main

import (
	"log"
	"net/http"
	"time"
	"fmt"
)
type Router struct {}

func (Router) ServeHTTP(res http.ResponseWriter,req *http.Request) {
	ReqCheck(res, req)
}

func RunService() {
	fmt.Print("Rodando...")
	s := &http.Server{
		Addr : ":8080",
		Handler: Router{},
		ReadTimeout: 10 * time.Second,
		WriteTimeout: 10 * time.Second, 	
	}
	log.Fatal(s.ListenAndServe())
}
