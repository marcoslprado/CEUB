package main

import (
	"errors"
	"math"
)
type Operation struct{
	Value1 float64
	Value2 float64
	Operator string
}

var opMap = map[string]func(float64, float64) Calculator {
	"+": DoSum,
	"-": DoSub,
	"*": DoMul,
	"/": DoDiv,
	"^": DoPow,
	"&": DoSqrt,
}

type Sum struct {
	Operation
}

func (a Sum) Calculate() (float64, error) {
	return a.Value1 + a.Value2, nil
}

type Sub struct{
	Operation
}

func (a Sub) Calculate () (float64, error) {
	return a.Value1 - a.Value2, nil
}

type Mul struct {
	Operation
}

func (a Mul) Calculate () (float64, error) {
	return a.Value1 * a.Value2, nil
}

type Div struct {
	Operation
}

func (a Div) Calculate() (float64, error) {
	if a.Value2 == 0 {
		return 0, errors.New("Error: Division by zero!")
	}
	result := a.Value1 / a.Value2
	return result, nil
}

type Pow struct {
	Operation
}

func (a Pow) Calculate() (float64, error) {
	return math.Pow(a.Value1,a.Value2), nil	
}

type Sqrt struct {
	Operation
}

func (a Sqrt) Calculate() (float64, error) {
	if a.Value2 < 0 {
		return 0, errors.New("Error!")
	}
	return math.Pow(a.Value1, 1/a.Value2), nil
}

// Funções do Map

func DoSum(v1 float64, v2 float64) Calculator {
	op := Operation{Value1:v1, Value2:v2}
	return Sum{Operation: op}
}

func DoSub(v1 float64, v2 float64) Calculator {
	op := Operation{Value1:v1, Value2:v2}
	return Sub{Operation: op}
}

func DoMul(v1 float64, v2 float64) Calculator {
	op := Operation{Value1:v1, Value2:v2}
	return Mul{Operation: op}
}

func DoDiv(v1 float64, v2 float64) Calculator {
	op := Operation{Value1:v1, Value2:v2}
	return Div{Operation: op}
}

func DoPow(v1 float64, v2 float64) Calculator {
	op := Operation{Value1:v1, Value2:v2}
	return Pow{Operation: op}
}

func DoSqrt(v1 float64, v2 float64) Calculator {
	op := Operation{Value1:v1, Value2:v2}
	return Sqrt{Operation: op}
}
