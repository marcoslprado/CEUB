// Pilhas //
// Política FILO (first in - last out) //
// O primeiro elemento que entrar na pilha sera o ultimo a sair //

// Programa que implementa uma pilha FILO //

#include <stdio.h>
#include <stdlib.h>

// Declaracao da estrutura //

struct no{
	int numero;
	struct no *proximo;
};

// Declaracao de variaveis //

struct no *cabeca = NULL;

// Funcao que insere um no na pilha //

void push(int numero) {
	// instanciacao da memoria //
	struct no *novoNo = (struct no *) malloc(sizeof(struct no));
	novoNo -> numero = numero; // Novo no recebe o numero do parametro //
	novoNo -> proximo = cabeca; // Novo no aponta para cabeca //
	cabeca = novoNo; // cabeca aponta para o novo no //
}

// Funcao que verifica o topo da pilha //

int top() {
	int retorno = 0;
	
	if (cabeca != NULL) {
		retorno = cabeca -> numero; // Retorno indica o numero que esta mais proximo de ser excluido //
	}
	
	return retorno;
}

// Funcao que remove um no da pilha //

int pop() {
	int retorno = 0;
	
	if (cabeca != NULL) {
		retorno = cabeca -> numero; // Retorno indica o numero excluido //
		struct no *temp = cabeca; // Ponteiro criado para fazer a exclusao //
		cabeca = cabeca -> proximo;
		free(temp);
	}
	
	return retorno;
}

// Funcao principal de execucao do programa //

int main() {
	printf("%d\n", pop());
	printf("=================\n");
	
	push(1);
	printf("%d\n", pop());
	printf("=================\n");
	
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	printf("%d\n", top());
	printf("=================\n");
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("=================\n");
	
}
