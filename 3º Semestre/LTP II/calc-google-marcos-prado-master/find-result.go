package main

import (
	"net/http"
	"encoding/json"
	"strconv"
	"strings"
)

func FindResult(res http.ResponseWriter, req *http.Request){
	// Armazena a query depois do op=, por isso índice 3
	query := req.URL.RawQuery[3:]
	
	symbols := "+-*/^&"
	
	// Variável que vai armazenar o index do símbolo encontrado
	opIndex := strings.IndexAny(query, symbols)
	
	var data Operation
	
	// Transformando os numeros da query em float e armazenando nos valores da struct data
	data.Value1, _ = strconv.ParseFloat(query[:opIndex], 64)
	data.Value2, _ = strconv.ParseFloat(query[opIndex+1:], 64)
	data.Operator = string(query[opIndex])
	
	result, _ := OperatorsMap[data.Operator](data.Value1, data.Value2).Calculate()
	jsonResult, _ := json.Marshal(ResponseMap[200](result,data.Operator))
	
	res.Write(jsonResult)
}
