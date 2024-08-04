package main

type ErrorMessage struct{
	Code int `json: "code"`
	Description string `json: "error"`
}

type ResponseMessage struct {
	Result float64 `json: "result"`
	Op string `json: "op"`
}
var ErrorMap = map[int]ErrorMessage {
	404: {Code: 404, Description: "Not Found"},
	500: {Code: 500, Description: "Something went wrong"},
}

var ResponseMap = map[int]func(float64,string) ResponseMessage {
	200: GenerateResponse,
	400: GenerateResponse,
}

func GenerateResponse(value float64, op string) ResponseMessage {
	return ResponseMessage{Result: value, Op: op}
}

