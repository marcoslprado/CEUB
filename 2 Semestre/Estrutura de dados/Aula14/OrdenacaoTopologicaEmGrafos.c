// Programa que implementa a ordenacao topologica em grafos //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaracao de constantes //

const int QTDVERTICES = 8;

// Funcao que cria o grafo //

void criar(int grafo[QTDVERTICES][QTDVERTICES], int aleatorio) {
	int conexao = 0;
	int i = 0;
	int j = 0;
	
	for (i = 0; i < QTDVERTICES; i++) {
		for (j = 0; j < QTDVERTICES; j++) {
			if (aleatorio) {
				conexao = (rand() % 2);
			} else {
				printf("Digite <1> se %d se conecta a %d: ", i, j);
				scanf("%d", &conexao);
			}
			grafo[i][j] = conexao;
		}
	}
}

// Funcao recursiva de ordenacao  topologica //

void ordenarTopologicoRecursivo(int grafo[QTDVERTICES][QTDVERTICES], int visitado[QTDVERTICES], int vertice) {
	int i;
	
	visitado[vertice] = 1;
	
	for (i = 0; i < QTDVERTICES; i++) {
		if (grafo[vertice][i]) {
			if (! visitado[i]) {
				ordenarTopologicoRecursivo(grafo, visitado, i);
			}
		}
	}
	printf("%d\t", vertice);
}

// Funcao de ordenacao topologica //

void ordenarTopologico(int grafo[QTDVERTICES][QTDVERTICES]) {
	int vertice;
	
	int visitado[QTDVERTICES];
	
	for (vertice = 0; vertice < QTDVERTICES; vertice++) {
		visitado[vertice] = 0;
	}
	
	for (vertice = 0; vertice < QTDVERTICES; vertice++) {
		if (! visitado[vertice]) {
			ordenarTopologicoRecursivo(grafo, visitado, vertice);
		}
	}
	
	printf("\n");
}

// Funcao principal de execucao do programa //

int main() {
	// Inicializacao da aleatoriedade //
	time_t t;
	srand((unsigned) time(&t));
	
	// Declaracao do grafo //
	int grafo[QTDVERTICES][QTDVERTICES];
	
	// Criacao do grafo //
	criar(grafo, 1);
	
	// Descoberta da ordenacao topologica do grafo //
	ordenarTopologico(grafo);
	criar(grafo, 0);
	
	ordenarTopologico(grafo);
}
