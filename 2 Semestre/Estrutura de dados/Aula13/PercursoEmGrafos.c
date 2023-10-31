// Percursos em Grafos //

// Programa que implementa um percurso em grafos //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaracao de Constantes //

const int TAMANHO = 7;

// Funcao que cria o grafo //

void criar(int **grafo, int aleatorio) {
	// Declaracao de Variaveis //
	int i = 0;
	int j = 0;
	int conexao = 0;
	
	// Inicializacao do grafo //
	for (i = 0; i < TAMANHO; i++) {
		for (j = 0; j < TAMANHO; j++) {
			grafo[i][j] = 0;
		}	
	}
	
	// Preenchimento do grafo //
	for (i = 0; i < (TAMANHO - 1); i++) {
		for (j = (i + 1); j < TAMANHO; j++) {
			if (aleatorio) {
				conexao = (rand() % 2);
			} else {
				printf("Digite <1> se %d estiver conectado a %d: ", i, j);
				
				scanf("%d", &conexao);
			}
			grafo[i][j] = conexao;
			grafo[j][i] = conexao;
		}
	}	
}

// Funcao recursiva que procura um caminho no grafo //

int procurarPercursoRecursivo(int **grafo, int *visitado, int inicio, int fim) {
	int vizinho = 0;
	int retorno = 0;
	if (inicio == fim) {
		retorno = 1;
	} else {
		visitado[inicio] = 1;
		for (vizinho = 0; vizinho < TAMANHO; vizinho++) {
			if ((grafo[inicio][vizinho]) && (! visitado[vizinho])) {
				if (procurarPercursoRecursivo(grafo, visitado, vizinho, fim)) {
					retorno = 1;
					printf("%d <- ", vizinho);
					break;
				}
			}
		}
	}
	
	return retorno;
}

// Funcao que procura um caminho no grafo //

int procurarPercurso(int **grafo, int inicio, int fim) {
	int i = 0;
	int visitado[TAMANHO];
	int encontrei = 0;
	
	for (i = 0; i < TAMANHO; i++) {
		visitado[i] = 0; 
	}
	
	encontrei = procurarPercursoRecursivo(grafo, visitado, inicio, fim);
	printf("%d\n", inicio);
	
	return encontrei;	
	}

// Funcao principal de execucao do programa //

int main() {
	int inicio = 0;
	int fim = 0;
	int i = 0;
	
	int **grafo = (int **) malloc(TAMANHO * sizeof(int *));
	for (i = 0; i < TAMANHO; i++) {
		grafo[i] = (int *) malloc(TAMANHO * sizeof(int));
	}
	
	criar(grafo, 0);
	
	printf("Digite o inicio: ");
	scanf("%d", &inicio);
	
	printf("Digite o fim: ");
	scanf("%d", &fim);
	
	if (procurarPercurso(grafo, inicio, fim)) {
		printf("Encontrei um caminho!!!\n");
	} else {
		printf("NAO encontrei um caminho !!!\n");
		
	}
}
