package main

import (
	"net/http"
	"log"
	"encoding/json"
)

func ReqCheck(res http.ResponseWriter, req *http.Request) {

	path := req.URL.Path
	if path != "/result" {
		message := ErrorMap[404]
		jsonError, err := json.Marshal(message)
		res.Write(jsonError)
		if err != nil {
			log.Fatal(err)
		}
	}
	if path == "/result" {
		FindResult(res, req)
	}
}
