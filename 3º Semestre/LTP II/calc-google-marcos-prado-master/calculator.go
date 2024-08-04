package main

type Calculator interface {
	Calculate () (float64, error)
}
