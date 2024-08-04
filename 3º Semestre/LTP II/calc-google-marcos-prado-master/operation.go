package main 

import (
	"errors"
	"math"
)

// Struct geral da operação

type Operation struct {
	Value1 float64
	Value2 float64
	Operator string 
}

var OperatorsMap = map[string]func(float64, float64) Calculator {
	"+" : NewSum,
	"-": NewSubtraction,
	"*": NewMultiplication,
	"/": NewDivision,
	"^": NewPow,
	"&": NewSqrt,
};

// Structs de cada operação e suas funções de acordo com a interface

type Sum struct {
	Operation
}

func (a Sum) Calculate() (float64, error) {
	return a.Value1 + a.Value2, nil
}

type Subtraction struct{
	Operation
}

func (a Subtraction) Calculate () (float64, error) {
	return a.Value1 - a.Value2, nil
}

type Multiplication struct {
	Operation
}

func (a Multiplication) Calculate () (float64, error) {
	return a.Value1 * a.Value2, nil
}

type Division struct {
	Operation
}

func (a Division) Calculate() (float64, error) {
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

// Funções Que vão chamar a conta quando alcançadas no mapa

func NewSum(f1 float64, f2 float64) Calculator {
	op := Operation{Value1:f1, Value2:f2}
	return Sum{Operation: op}
}

func NewSubtraction(f1 float64, f2 float64) Calculator {
	op := Operation{Value1:f1, Value2:f2}
	return Subtraction{Operation: op}
}

func NewMultiplication(f1 float64, f2 float64) Calculator {
	op := Operation{Value1:f1, Value2:f2}
	return Multiplication{Operation: op}
}

func NewDivision(f1 float64, f2 float64) Calculator {
	op := Operation{Value1:f1, Value2:f2}
	return Division{Operation: op}
}

func NewPow(f1 float64, f2 float64) Calculator {
	op := Operation{Value1:f1, Value2:f2}
	return Pow{Operation: op}
}

func NewSqrt(f1 float64, f2 float64) Calculator {
	op := Operation{Value1:f1, Value2:f2}
	return Sqrt{Operation: op}
}

