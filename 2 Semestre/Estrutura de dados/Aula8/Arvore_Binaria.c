// Arvore Binaria: Arvore cuja ordem e igual a 2(no max 2 filhos pra cada elemento) //
// Se a aktura e h, entao a arvore tem no maximo 2^h-1 nos //
// Travessia pode ser pre-ordem, em-ordem ou pos ordem//
// Pre-ordem - 1º raiz, 2º esquerda, 3º direita //
// em-ordem - 1º esquerda 2º raiz, 3º direita //
// Pos-ordem - 1º esquerda, 2º direita, 3º raiz //

// Programa que implementa as navegacoes em arvore binaria //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaracao de estruturas //

struct no {
	int numero;
	struct no *esquerda;
	struct no *direita;
};

// Funcao que insere um no na arvore //

struct no *inserir(struct no *raiz, int numero) {
	if (raiz == NULL) { // Caso da raiz ser nula //
		raiz = (struct no *) malloc(sizeof(struct no));
		raiz -> numero = numero;
		raiz -> esquerda = NULL;
		raiz -> direita = NULL;
	} else { // Caso de raiz nao nula //
		if ((rand() % 2) == 0) { // Sorteia um numero. Se ele for par, insere na esquerda da raiz. Se nao, na direita chamando a propria funcao de forma recursiva //
			raiz -> esquerda = inserir(raiz -> esquerda, numero); 
		} else {
			raiz -> direita = inserir(raiz -> direita, numero);
		}
	}
	
	return raiz;
}

// Funcao que navega a arvore em PRE-ORDEM //

void navegarPreOrdem(struct no *raiz) {
	if (raiz != NULL) {
		printf("%d\t", raiz -> numero);
		navegarPreOrdem(raiz -> esquerda);
		navegarPreOrdem(raiz -> direita);
	}
}

// Funcao que navega a arvore em EM-ORDEM //

void navegarEmOrdem(struct no *raiz) {
	if (raiz != NULL) {
		navegarEmOrdem(raiz -> esquerda);
		printf("%d\t", raiz -> numero);
		navegarEmOrdem(raiz -> direita);
	}
}

// Funcao que navega a arvore em POS-ORDEM //

void navegarPosOrdem(struct no *raiz) {
	if (raiz != NULL) {
		navegarPosOrdem(raiz -> esquerda);
		navegarPosOrdem(raiz -> direita);
		printf("%d\t", raiz -> numero);
	}
}

// Funcao principal de execucao do programa //

int main() {
	// Declaracao de variaveis //
	struct no *raiz = NULL;
	time_t t;
	
	// Inicializacao da aleatoriedade //
	srand((unsigned) time(&t));
	
	// Criacao da arvore //
	int i = 0;
	for (i = 1; i < 10; i++) {
		raiz = inserir(raiz, i);
	}
	
	// Navegacoes //
	printf("Pre-Ordem:\t");
	navegarPreOrdem(raiz);
	printf("\n=====================================================\n");
	printf("Em-Ordem:\t");
	navegarEmOrdem(raiz);
	printf("\n=====================================================\n");
	printf("Pos-Ordem:\t");
	navegarPosOrdem(raiz);
}
