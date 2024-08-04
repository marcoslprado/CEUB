package main

import (
	"net/http"
)

// enableCors é um middleware que habilita o CORS (Cross-Origin Resource Sharing)
// permitindo que o servidor responda a requisições de diferentes origens.
func enableCors(next http.Handler) http.Handler {
	return http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		// Define o cabeçalho "Access-Control-Allow-Origin" para permitir todas as origens.
		w.Header().Set("Access-Control-Allow-Origin", "*")

		// Define os métodos HTTP permitidos.
		w.Header().Set("Access-Control-Allow-Methods", "GET, POST, PUT, DELETE, OPTIONS")

		// Define os cabeçalhos permitidos nas requisições.
		w.Header().Set("Access-Control-Allow-Headers", "Content-Type")

		// Se a requisição for do tipo OPTIONS (pré-verificação do CORS), retorna o status 200 OK.
		if r.Method == http.MethodOptions {
			w.WriteHeader(http.StatusOK)
			return
		}

		// Passa a requisição para o próximo handler na cadeia.
		next.ServeHTTP(w, r)
	})
}
