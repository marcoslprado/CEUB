// Grafos//

// Vertices vizinhos sao chamados de adjacentes//
// Grau de um vertice eh o numero de vizinhos desse vertice

// Programa que implementa um grafo //

#include <stdio.h>
#include <stdlib.h>

// Funcao que determina o tamanho do grafo//

int setTamanho() {
	int retorno = 0;
	
	printf("Digite o tamanho do grafo: ");
	scanf("%d", &retorno);
	
	return retorno;
}

// Funcao que cria o grafo //

int ** criar(int tamanho) {
	//Declaracao//
	int i = 0;
	int j = 0;
	
	// Criacao//
	int **grafo = (int **) malloc(tamanho * sizeof(int *));
	for (i = 0; i < tamanho; i++) {
		grafo[i] = (int *) malloc(tamanho * sizeof(int));
	}
	
	// Inicializacao//
	for (i = 0; i <tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			grafo[i][j] = 0;
		}
	}
	
	// Retorno //
	
	return grafo;
}
// Funcao que preenche o grafo //

void preencher(int **grafo, int tamanho) {
	int i = 0;
	int j = 0;
	int amigo = 0;
	
	for (i = 0; i < (tamanho - 1); i++) {
		for (j = (i+1); j < tamanho; j++) {
			printf("Digite <1> se %d for amigo de %d: ", i, j);
			scanf("%d", &amigo);
			
			grafo[i][j] = amigo;
			grafo[j][i] = amigo;
		}
	}
}

// Funcao que imprime o grafo//

void imprimir(int **grafo, int tamanho) {
	int i = 0;
	int j = 0;
	
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			printf("%d\t", grafo[i][j]);
		}
		printf("\n");
	}
}

// Funcao que descobre o vertice mais popular //

int descobrirVerticeMaisPopular(int **grafo, int tamanho) {
	int vertice = -1;
	int qtdAmigos = 0;
	int contador = 0;
	int i = 0;
	int j = 0;
	
	for (i = 0; i < tamanho; i++) {
		contador = 0;
		for (j = 0; j < tamanho; j++) {
			if (grafo[i][j]) {
				contador++;
			}
		}
		if (contador > qtdAmigos) {
			vertice = i;
			qtdAmigos = contador;
		}
	}
	
	return vertice;
}
// Funcao principal de execucao do programa //

int main() {
	int tamanho = setTamanho();
	
	int **grafo = criar(tamanho);
	
	preencher(grafo, tamanho);
	
	imprimir(grafo,tamanho);
	
	int vertice = descobrirVerticeMaisPopular(grafo, tamanho);
	printf("O vertice mais popular eh: %d\n", vertice);
}
