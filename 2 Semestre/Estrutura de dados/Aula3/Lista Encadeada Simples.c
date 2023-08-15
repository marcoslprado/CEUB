// Listas Encadeadas 
// N�o se pode por n�mero em uma vari�vel int de ponteiro. Dever� ser um endere�o para outra �rea de mem�ria, a qual tem um inteiro l�. //
// (*) -> Declara o ponteiro e o (&) -> endere�a o ponteiro //
// char *c //
// Nesse caso C = "J" (N�o pode acontecer porque o ponteiro � um endere�o e n�o caractere) //
// Deve-se fazer *C = "J" (Nesse caso mostra o caractere que o ponteiro aponta) //

/////////// Programa de Lista Encadeada Simples ///////////////////

#include <stdio.h>
#include <stdlib.h>

// Defini��o da Estrutura do N� //

struct no {
	int numero;
	struct no *proximo;
};

// Declara��o de vari�veis //

struct no *cabeca;

// Fun��o que insere um n� na lista //

void inserir(int parametroNumero){
	// Criar um novo n� //
	struct no *novoNo = NULL;
	novoNo = (struct no *) malloc(sizeof(struct no )); 
	novoNo -> numero = parametroNumero; 
	novoNo -> proximo = NULL; 
	
	if (cabeca == NULL) { // CASO LISTA ESTEJA VAZIA //
		cabeca = novoNo;
	} else { //CASO A LISTA N�O ESTEJA VAZIA (CONT�M ALGO)
		// Procurar o �ltimo elemento da lista //
		struct no *ponteiro = cabeca;
		while (ponteiro -> proximo != NULL) {
			ponteiro = ponteiro -> proximo;
		}
		
		// Apontar o �ltimo para o novo
		ponteiro -> proximo = novoNo;
	}	
}


// Fun��o que imprime os elementos(n�s) da lista //

void imprimir () {
	struct no *ponteiro = cabeca;
	
	while (ponteiro != NULL) {
		printf("%d\n", ponteiro -> numero);
		ponteiro = ponteiro -> proximo;
	}
}

// Fun��o que remove um elemento da lista //

void remover (int parametroNumero) {
	struct no *ponteiroAnterior;
	struct no *ponteiroExcluir;
	
	if (cabeca != NULL) {
		if (cabeca -> numero == parametroNumero) {
			ponteiroExcluir = cabeca;
			cabeca = cabeca -> proximo;
			free(ponteiroExcluir);
		} else{
			ponteiroAnterior = cabeca;
			while ((ponteiroAnterior -> proximo != NULL) &&
			 	(ponteiroAnterior -> proximo -> numero != parametroNumero)) {
				ponteiroAnterior = ponteiroAnterior -> proximo;
			}
			if (ponteiroAnterior -> proximo != NULL) {
				ponteiroExcluir = ponteiroAnterior -> proximo;
				ponteiroAnterior -> proximo = ponteiroExcluir -> proximo;
				free(ponteiroExcluir);
			}
		}
	}
}

// Fun��o principal de execu��o do programa //

int main(){
	int i;
	
	for (i = 0; i < 10; i++) {
		inserir(i);
	}
	imprimir();
	printf("========================\n");
	
	remover(3);
	
	imprimir();
}
