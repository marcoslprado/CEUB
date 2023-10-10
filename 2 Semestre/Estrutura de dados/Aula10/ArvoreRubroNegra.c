// Arvores Rubro-Negras //

// Programa que implementa uma arvore rubro-negra //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaracao da estrutura do no //

struct no {
	int numero;
	struct no *esquerda;
	struct no *direita;
	int cor;  // 0 preto, 1 vermelho //
};

// Funcao que rotaciona a arvore a esquerda //

struct no *rotacionarEsquerda(struct no *raiz) { // Filho direito vira raiz e a raiz vira filho esquerdo //
	// Rotacao propriamente dita //
	struct no *x = raiz -> direita; // ponteiro temporario //
	raiz -> direita = x -> esquerda; // Filho direito da raiz aponta para o filho esquerdo de x (sendo x a nova raiz no final)//
	x -> esquerda = raiz; // Filho esquerdo de x aponta para a raiz //
	
	// Ajuste da cor //
	x -> cor = raiz -> cor; // X, que e a nova raiz assume a cor da raiz antiga //
	raiz -> cor = 1; // cor da raiz antiga e atualizada para vermelho //
	
	// Retorno //
	return x;
}

// Funcao que rotaciona a arvore a esquerda //

struct no *rotacionarDireita(struct no *raiz) { // Filho esquerdo vira raiz e a raiz vira filho direito //
	// Rotacao propriamente dita //
	struct no *x = raiz -> esquerda; // ponteiro temporario apontando para o filho esquerdo da raiz //
	raiz -> esquerda = x -> direita; // Filho esquerdo da raiz aponta para o filho direito de x (sendo x a Nova raiz no final) //
	x -> direita = raiz; // Filho direito de x aponta para a raiz //
	
	// Ajuste da cor //
	x -> cor = raiz -> cor; // X, que e a nova raiz assume a cor da raiz antiga //
	raiz -> cor = 1; // cor da raiz antiga e atualizada para vermelho //
	
	// Retorno //
	return x;
}

// Funcao que sobe o vermelho //

void subirVermelho(struct no *raiz) {
	raiz -> cor = 1;
	raiz -> esquerda -> cor = 0;
	raiz -> direita -> cor = 0;
}

// Funcao que devolve a cor do no //

int vermelho(struct no *raiz) {
	int retorno = 0;
	
	if(raiz != NULL) {
		retorno = raiz -> cor;
	}
	
	return retorno;
}

// Funcao que insere um no na arvore //

struct no *inserir(struct no *raiz, int numero) {
	if(raiz == NULL) {
		raiz = (struct no *) malloc(sizeof(struct no));
		raiz -> numero = numero;
		raiz -> esquerda =  NULL;
		raiz -> direita = NULL;
		raiz -> cor = 1;
	} else {
		if(numero < raiz -> numero) {
			raiz -> esquerda = inserir(raiz -> esquerda, numero);
		} else {
			raiz -> direita = inserir(raiz -> direita, numero);
		}
	}
	
	// Algoritmo de correcao do balanceamento da arvore //
	if(vermelho(raiz -> direita) && ! vermelho(raiz -> esquerda)) {
		raiz = rotacionarEsquerda(raiz);
	}
	
	if (vermelho(raiz -> esquerda) && vermelho(raiz -> esquerda -> esquerda)) {
		raiz = rotacionarDireita(raiz);
	}
	
	if(vermelho(raiz -> esquerda) && vermelho(raiz -> direita)) {
		subirVermelho(raiz);
	}
	
	// Retorno //
	return raiz;
}

// Funcao que imprime a arvore //

void imprimir(struct no *raiz, char *endentador) {
	if (raiz != NULL) {
		printf("%s%d\n", endentador, raiz -> numero);
		
		char *temp = (char *) malloc(1024 * sizeof(char));
		strcpy(temp, endentador);
		strcat(temp, "---");
		
		imprimir(raiz -> esquerda, temp);
		imprimir(raiz -> direita, temp);
	}
}

// Funcao principal de execucao do programa //

int main() {
	struct no *raiz = NULL;
	int i = 0;
	
	for(i = 0; i < 50; i++) {
		raiz = inserir(raiz, i);
	}
	
	imprimir(raiz, "");
}
