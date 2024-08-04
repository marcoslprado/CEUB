package main

import (
	"net/http"
	"log"
	"encoding/json"
)
var acNumber float64 = 0.0
var acList []string

func ReqCheck(res http.ResponseWriter, req *http.Request) {
	path := req.URL.Path
	query := req.URL.RawQuery[3:]

	if path == "/" {
		message:= ErrorMap[500]
		jsonError, err := json.Marshal(message)
		res.Write(jsonError)
		if err != nil {
			log.Fatal(err)
		}
		return
	}
	
	if path != "/result" {
		message := ErrorMap[404]
		jsonError, err := json.Marshal(message)
		res.Write(jsonError)
		if err != nil {
			log.Fatal(err)
		}
	}
	if path == "/result" {
		if query == "all" {
			message := RememberMap[15](acNumber, acList)
			jsonM, _ := json.Marshal(message)
			res.Write(jsonM)
			return
		}
		
		x := CalcResult(res,req)
		acNumber += x
		acList = append(acList, query)
	}
}
