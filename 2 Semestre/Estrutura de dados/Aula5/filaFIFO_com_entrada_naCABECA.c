// Filas //
// Política FIFO (first in - first out) //

// Programa que implementa uma fila FIFO //
// A Fila implementada tem a entrada na CABECA //

#include <stdio.h>
#include <stdlib.h>

// Declaracao da estrutura //

struct no{
	int numero;
	struct no *proximo;
};

// Declaracao de variaveis //

struct no *cabeca = NULL;

// Funcao que insere um no na fila //

void inserir(int numero) {
	// instanciacao da memoria //
	struct no *novoNo = (struct no *) malloc(sizeof(struct no));
	novoNo -> numero = numero; // Novo no recebe o numero do parametro //
	novoNo -> proximo = cabeca; // Novo no aponta para o que a cabeca aponta //
	cabeca = novoNo; // cabeca aponta para o novo no //
}

// funcao que remove um no da fila //

int remover() {
	// Variaveis //
	struct no *ponteiro = cabeca;
	int retorno = 0;
	if (cabeca != NULL) { // Se Lista não vazia faça // 
		if (cabeca -> proximo == NULL) {  // Caso de só um elemento na lista //
			retorno = cabeca -> numero;
			free(cabeca);
			cabeca = NULL;
		} else{
			// Navegacao na fila ate o penultimo //
			while (ponteiro -> proximo -> proximo != NULL) { 
				ponteiro = ponteiro -> proximo;	
			}
			
			retorno = ponteiro -> proximo -> numero; // Retorna o número excluído //
			free(ponteiro -> proximo); // Exclusão da memória em si //
			ponteiro -> proximo = NULL;
		}
	}
	return retorno;
}

// Funcao principal de execucao do programa //

int main() {
	printf("%d\n", remover());
	printf("=================\n");
	
	inserir(1);
	printf("%d\n", remover());
	printf("=================\n");
	
	inserir(1);
	inserir(2);
	inserir(3);
	inserir(4);
	inserir(5);
	printf("%d\n", remover());
	printf("%d\n", remover());
	printf("%d\n", remover());
	printf("%d\n", remover());
	printf("%d\n", remover());
	printf("=================\n");
	
}



