// Cabeca de uma arvore e a raiz //
// Ordem -> quantidade maxima de filhos que um elemento da arvore pode ter //
// Altura -> Profundidade da arvore. Quantos elementos tem na vertical //
// Busca de elemento em uma arvore e muito eficiente //

// Programa que implementa uma arvore de ordem 5 //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Declacarao de estruturas //

struct no {
	int numero;
	struct no *filho1;
	struct no *filho2;
	struct no *filho3;
	struct no *filho4;
	struct no *filho5;
};

// Declaracao de variaveis //

struct no *raiz = NULL; // Criacao do ponteiro raiz que apontara para o primeiro no da arvore //
time_t t;

// Funcao que insere um no na arvore //

struct no *inserir(struct no *raiz, int numero) {
	if (raiz == NULL) {
		// Caso facil: raiz nula (subarvore vazia) //
		raiz = (struct no *) malloc(sizeof(struct no));
		raiz -> numero = numero;
		raiz -> filho1 = NULL;
		raiz -> filho2 = NULL;
		raiz -> filho3 = NULL;
		raiz -> filho4 = NULL;
		raiz -> filho5 = NULL;
	} else {
		// Caso dificil: sortear um filho para inserir na arvore //
		
		int sorteio = rand() % 5;
		
		if (sorteio == 0) {
			raiz -> filho1 = inserir(raiz -> filho1, numero);
		} else if (sorteio == 1) {
			raiz -> filho2 = inserir(raiz -> filho2, numero);
		} else if (sorteio == 2) {
			raiz -> filho3 = inserir(raiz -> filho3, numero);
		} else if (sorteio == 3) {
			raiz -> filho4 = inserir(raiz -> filho4, numero);
		} else if (sorteio == 4) {
			raiz -> filho5 = inserir(raiz -> filho5 , numero);
		}
	}
	
	return raiz;
}

// Funcao que imprime a arvore //

void imprimir(struct no *raiz, char *endentador) {
	if (raiz != NULL) {
		printf("%s%d\n", endentador, raiz -> numero);
		
		char *temp = (char *) malloc(sizeof(1024));
		strcpy(temp, endentador);
		strcat(temp, "---");
		
		imprimir(raiz -> filho1, temp);
		imprimir(raiz -> filho2, temp);
		imprimir(raiz -> filho3, temp);
		imprimir(raiz -> filho4, temp);
		imprimir(raiz -> filho5, temp);
	}
}

// Funcao principal de execucao do programa //

int main() {
	srand((unsigned) time(&t));
	char *endentador = (char *) malloc(sizeof(1024));
	strcpy(endentador, "");
	
	int i = 0;
	for (i = 0; i < 100; i++) {
		raiz = inserir(raiz, i);
	}
	
	imprimir(raiz, endentador);
}
