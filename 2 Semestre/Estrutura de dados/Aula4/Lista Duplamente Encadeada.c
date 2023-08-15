// Programa de Lista Duplamente Encadeada //
// Cada n� possui um ponteiro que aponta para o pr�ximo e um que aponta para o anterior //

#include <stdio.h>
#include <stdlib.h>

// Declara��o da estrutura do n� //

struct no{
	int numero;
	struct no *anterior;
	struct no *proximo;
};

// Declara��o de vari�veis //

struct no *cabeca = NULL;

// Fun��o que insere um elemento na lista //

void inserir(int numero) {
	// Instancia��o da mem�ria //
	struct no *novoNo = (struct no *) malloc(sizeof(struct no));
	novoNo -> numero = numero;
	novoNo -> anterior = NULL;
	novoNo -> proximo = NULL;
	
	
	if (cabeca == NULL) {
		// Forma f�cil que a lista est� vazia //
		cabeca = novoNo;
	} else {
		// Forma dif�cil que a lista N�O est� vazia //
		struct no *ultimo = cabeca;
		
		while (ultimo -> proximo != NULL) {
			ultimo = ultimo -> proximo;
		}
		ultimo -> proximo = novoNo;
		novoNo -> anterior = ultimo;
	}
	
}

// Fun��o que imprime os n�s da lista //

void imprimir() {
	printf("=====================================\n");
	
	struct no *ponteiro = cabeca;
	
	while (ponteiro != NULL) {
		printf("%d\n", ponteiro -> numero);
		ponteiro = ponteiro -> proximo;
	}
}

// Fun��o que exclui um n� da lista //

void excluir(int numero) {
	struct no *ponteiro = cabeca;
	
	while(ponteiro != NULL) {
		if (ponteiro -> numero == numero) {
			//  For�ar a exclus�o //
			if (ponteiro == cabeca) {
				// Excluir o primeiro //
				cabeca = cabeca -> proximo;
				if (cabeca != NULL) {
					cabeca -> anterior = NULL;
				}
			} else if(ponteiro -> proximo == NULL) {
				// Excluir o �ltimo //
				ponteiro -> anterior -> proximo = NULL;
			}else {
				// Excluir no meio //
				ponteiro -> proximo -> anterior = ponteiro -> anterior;
				ponteiro -> anterior -> proximo = ponteiro -> proximo;
			}
			
			free(ponteiro);
			return;
		}
		
		ponteiro = ponteiro -> proximo;
	}
}
// Fun��o principal de execu��o do programa //

int main() {
	inserir(1);
	inserir(2);
	inserir(3);
	inserir(4);
	inserir(5);
	inserir(6);
	imprimir();
	
	excluir(1);
	excluir(3);
	excluir(6);
	imprimir();
}
