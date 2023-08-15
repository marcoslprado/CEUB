// Listas Encadeadas 
// Não se pode por número em uma variável int de ponteiro. Deverá ser um endereço para outra área de memória, a qual tem um inteiro lá. //
// (*) -> Declara o ponteiro e o (&) -> endereça o ponteiro //
// char *c //
// Nesse caso C = "J" (Não pode acontecer porque o ponteiro é um endereço e não caractere) //
// Deve-se fazer *C = "J" (Nesse caso mostra o caractere que o ponteiro aponta) //

/////////// Programa de Lista Encadeada Simples ///////////////////

#include <stdio.h>
#include <stdlib.h>

// Definição da Estrutura do Nó //

struct no {
	int numero;
	struct no *proximo;
};

// Declaração de variáveis //

struct no *cabeca;

// Função que insere um nó na lista //

void inserir(int parametroNumero){
	// Criar um novo nó //
	struct no *novoNo = NULL;
	novoNo = (struct no *) malloc(sizeof(struct no )); 
	novoNo -> numero = parametroNumero; 
	novoNo -> proximo = NULL; 
	
	if (cabeca == NULL) { // CASO LISTA ESTEJA VAZIA //
		cabeca = novoNo;
	} else { //CASO A LISTA NÃO ESTEJA VAZIA (CONTÉM ALGO)
		// Procurar o último elemento da lista //
		struct no *ponteiro = cabeca;
		while (ponteiro -> proximo != NULL) {
			ponteiro = ponteiro -> proximo;
		}
		
		// Apontar o último para o novo
		ponteiro -> proximo = novoNo;
	}	
}


// Função que imprime os elementos(nós) da lista //

void imprimir () {
	struct no *ponteiro = cabeca;
	
	while (ponteiro != NULL) {
		printf("%d\n", ponteiro -> numero);
		ponteiro = ponteiro -> proximo;
	}
}

// Função que remove um elemento da lista //

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

// Função principal de execução do programa //

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
