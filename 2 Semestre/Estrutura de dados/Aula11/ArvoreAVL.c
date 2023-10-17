// Arvores AVL //
// Uma arvore binaria eh AVL quando a diferenca de altura entres as subarvores esquerda e direita de um no qualquer nao eh superior a 1 //


// Programa que implementa uma arvore AVL //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaracao da estrutura do no //

struct no {
	int numero;
	struct no *esquerda;
	struct no *direita;
	int altura;
};

// Funcao que retorna a altura de um no //

int getAlturaDoNo(struct no *raiz) {
	return ((raiz == NULL) ? 0 : raiz -> altura); // Operador ternario. Se for true retorna 0, se nao, raiz -> altura //
}

// Funcao que retorna o maior entre dois numeros //

int getMaximoEntreDoisNumeros(int a, int b) {
	return (a > b) ? a : b;
}

// Funcao que captura o balanco da arvore // Balanco = diferenca da altura entre a esquerda e a direita da arvore//

int getBalanco(struct no *raiz) {
	int retorno = 0;
	
	if (raiz != NULL) {
		retorno = (getAlturaDoNo(raiz -> esquerda) - getAlturaDoNo(raiz -> direita));
	}
	
	return retorno;
}

// Funcao que executa a rotacao a esquerda //

struct no *rotacaoEsquerda(struct no *raiz) {
	struct no *novaRaiz = raiz -> direita;
	struct no *temp = novaRaiz -> esquerda;
	
	novaRaiz -> esquerda = raiz;
	raiz -> direita = temp;
	
	raiz -> altura = (getMaximoEntreDoisNumeros(getAlturaDoNo(raiz -> esquerda), getAlturaDoNo(raiz -> direita)) + 1);
	novaRaiz -> altura = (getMaximoEntreDoisNumeros(getAlturaDoNo(novaRaiz -> esquerda), getAlturaDoNo(novaRaiz -> direita)) + 1);
	
	return novaRaiz;
}

// Funcao que executa a rotacao a direita //

struct no *rotacaoDireita(struct no *raiz) {
	struct no *novaRaiz = raiz -> esquerda;
	struct no *temp = novaRaiz -> direita;
	
	novaRaiz -> direita = raiz;
	raiz -> esquerda = temp;
	
	raiz -> altura = (getMaximoEntreDoisNumeros(getAlturaDoNo(raiz -> esquerda), getAlturaDoNo(raiz -> direita)) + 1);
	novaRaiz -> altura = (getMaximoEntreDoisNumeros(getAlturaDoNo(novaRaiz -> esquerda), getAlturaDoNo(novaRaiz -> direita)) + 1);
	
	return novaRaiz;
}

// Funcao que insere um no na arvore //

struct no *inserir(struct no *raiz, int numero) {
	if (raiz == NULL) {
		raiz = (struct no *) malloc(sizeof(struct no));
		raiz -> numero = numero;
		raiz -> esquerda = NULL;
		raiz -> direita = NULL;
		raiz -> altura = 1;
	} else {
		if (raiz -> numero > numero) {
			raiz -> esquerda = inserir(raiz -> esquerda, numero);
		} else {
			raiz -> direita = inserir(raiz -> direita, numero);
		}
	}
	
	raiz -> altura = (1 + getMaximoEntreDoisNumeros(getAlturaDoNo(raiz -> esquerda), getAlturaDoNo(raiz -> direita)));
	
	int balanco = getBalanco(raiz);
	
	if ((balanco > 1) && (numero < raiz -> esquerda -> numero)) { // Arvore desbalanceada para esquerda e quero inserir na esquerda//
		raiz = rotacaoDireita(raiz);
	}
	
	if ((balanco < -1) && (numero > raiz -> direita -> numero)) { // Arvore desbalanceada para direita e quero inserir na direita//
		raiz = rotacaoEsquerda(raiz);
	}
	
	if ((balanco > 1) && (numero > raiz -> esquerda -> numero)) { // Arvora desbalanceada para esquerda e quero inserir na direita //
		raiz -> esquerda = rotacaoEsquerda(raiz -> esquerda);
		raiz = rotacaoDireita(raiz);
	}
	
	if ((balanco < -1) && (numero < raiz -> direita -> numero)) { // Arvore desbalanceada para direita e quero inserir na esquerda //
		raiz -> direita = rotacaoDireita(raiz -> direita);
		raiz = rotacaoEsquerda(raiz);
	}
	
	return raiz;
}

// Funcao que imprime a arvore //

void imprimir(struct no *raiz, char *endentador) {
	if (raiz != NULL) {
		printf("%s%d (A %d)\n", endentador, raiz -> numero, raiz -> altura);
		
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
	
	for (i = 0; i < 10; i++) {
		raiz = inserir(raiz, i);
	}
	
	imprimir(raiz, "");
}
