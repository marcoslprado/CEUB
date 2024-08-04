package main

type ErrorMessage struct{
	Code int `json: "code"`
	Error string `json: "error"`
}

type ResponseMessage struct {
	Result float64 `json: "result"`
	Op string `json: "op"`
}

type RememberMessage struct {
	Acumulado float64 `json: "acumulado"`
	Operations	[]string `json: "operations"`
}

var ErrorMap = map[int]ErrorMessage {
	404: {Code: 404, Error: "Not Found"},
	500: {Code: 500, Error: "Something went wrong"},
}

var ResponseMap = map[int]func(float64,string) ResponseMessage {
	200: GenerateResponse,
	400: GenerateResponse,
}

var RememberMap = map[int] func(float64, []string) RememberMessage {
	15: GenerateRemember,
}
func GenerateResponse(value float64, op string) ResponseMessage {
	return ResponseMessage{Result: value, Op: op}
}

func GenerateRemember(value float64, list []string) RememberMessage {
	return RememberMessage{Acumulado: value, Operations: list}
}
