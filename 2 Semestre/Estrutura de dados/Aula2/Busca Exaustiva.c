// Programa de Busca Exaustiva //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração de variáveis //
int vetor[10000];
int i = 0;
int j = 0;
time_t t;
int busca;
int achei;

// Função Principal de execução do programa //

int main() {
	// Inicialização da aleatoriedade //
	srand((unsigned) time(&t));
	// Inicialização do vetor já com os números randômicos //
	for (i = 0; i < 10000; i++){
		vetor[i] = (rand() % 10000);
	}
	// Definição da busca //
	printf("Digite o numero a ser buscado: ");
	scanf("%d", &busca);
	
	// Busca propriamente dita //
	achei = -1; // No caso de não achar, permanece -1 //
	for (i = 0; i < 10000; i++) {
		if (vetor[i] == busca){
			achei = i;
		}
	}
	if (achei == -1) {
		printf("Se fodeu! Nao existe");
	} else{
		printf("Achei na posicao %d", achei);
	}
}
