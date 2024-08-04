package main

import ("log"
	"time"
	"net/http"
	"fmt"
)

type Router struct {}

func (Router) ServeHTTP(res http.ResponseWriter, req *http.Request) {
	ReqCheck(res, req)
}
func RunService() {
	fmt.Print("Funcionando...")
	s := &http.Server{
		Addr : ":8000",
		Handler: Router{},
		ReadTimeout: 10 * time.Second,
		WriteTimeout: 10 * time.Second, 	
	}
	log.Fatal(s.ListenAndServe())
}
