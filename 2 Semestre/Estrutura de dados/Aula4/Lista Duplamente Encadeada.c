// Programa de Lista Duplamente Encadeada //
// Cada nó possui um ponteiro que aponta para o próximo e um que aponta para o anterior //

#include <stdio.h>
#include <stdlib.h>

// Declaração da estrutura do nó //

struct no{
	int numero;
	struct no *anterior;
	struct no *proximo;
};

// Declaração de variáveis //

struct no *cabeca = NULL;

// Função que insere um elemento na lista //

void inserir(int numero) {
	// Instanciação da memória //
	struct no *novoNo = (struct no *) malloc(sizeof(struct no));
	novoNo -> numero = numero;
	novoNo -> anterior = NULL;
	novoNo -> proximo = NULL;
	
	
	if (cabeca == NULL) {
		// Forma fácil que a lista está vazia //
		cabeca = novoNo;
	} else {
		// Forma difícil que a lista NÃO está vazia //
		struct no *ultimo = cabeca;
		
		while (ultimo -> proximo != NULL) {
			ultimo = ultimo -> proximo;
		}
		ultimo -> proximo = novoNo;
		novoNo -> anterior = ultimo;
	}
	
}

// Função que imprime os nós da lista //

void imprimir() {
	printf("=====================================\n");
	
	struct no *ponteiro = cabeca;
	
	while (ponteiro != NULL) {
		printf("%d\n", ponteiro -> numero);
		ponteiro = ponteiro -> proximo;
	}
}

// Função que exclui um nó da lista //

void excluir(int numero) {
	struct no *ponteiro = cabeca;
	
	while(ponteiro != NULL) {
		if (ponteiro -> numero == numero) {
			//  Forçar a exclusão //
			if (ponteiro == cabeca) {
				// Excluir o primeiro //
				cabeca = cabeca -> proximo;
				if (cabeca != NULL) {
					cabeca -> anterior = NULL;
				}
			} else if(ponteiro -> proximo == NULL) {
				// Excluir o último //
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
// Função principal de execução do programa //

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
