package main

type ErrorMessage struct {
	Code  int    `json: "code"`
	Error string `json: error`
}

var ErrorMap = map[int]ErrorMessage{
	404: {Code: 404, Error: "Not Found"},
	500: {Code: 500, Error: "Something went wrong"},
}
