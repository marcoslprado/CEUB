package main

import (
	"net/http"
)

func ReqCheck(res http.ResponseWriter, req *http.Request) {
	if handler, exists := MethodMap[req.Method]; exists {
		handler(req.URL.Path, res, req)
	} else {
		http.Error(res, "Método não suportado", http.StatusMethodNotAllowed)
	}
}
