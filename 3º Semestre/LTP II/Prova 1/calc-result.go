package main

import (
	"net/http"
	"strings"
	"strconv"
	"encoding/json"
)

func CalcResult(res http.ResponseWriter, req *http.Request) (float64) {
	q := req.URL.RawQuery[3:]
	
	operators := "+-*/^&"
	opPos :=  strings.IndexAny(q, operators)
	
	var info Operation
	info.Operator = string(q[opPos])
	info.Value1, _ = strconv.ParseFloat(q[:opPos], 64)
	info.Value2, _ = strconv.ParseFloat(q[opPos+1:], 64)
	
	result, _ := opMap[info.Operator](info.Value1, info.Value2).Calculate()
	
	
	message := ResponseMap[200](result, info.Operator)
	jsonR, _ := json.Marshal(message)
	res.Write(jsonR)
	
	return result
}
