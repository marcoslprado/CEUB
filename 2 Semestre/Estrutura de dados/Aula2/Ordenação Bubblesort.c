// Programa de Bubblesort(Compara os números de dois em dois)//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração de variáveis //
int vetor[10000];
int i = 0;
time_t t;
int temp;
int troquei;
// Função Principal de execução do programa //

int main() {
	// Inicialização da aleatoriedade //
	srand((unsigned) time(&t));
	// Inicialização do vetor já com os números randômicos //
	for (i = 0; i < 10000; i++){
		vetor[i] = (rand() % 10000);
	}
	// Impressão do vetor //
	for (i = 0; i < 10000; i++){
		printf("%d\n", vetor[i]);
	}
	// Ordenação propriamente dita //
	troquei = 1;
	while (troquei) {
		troquei = 0;
		
		for (i = 0; i < 9999; i++){ // Do primeiro ao penúltimo //
			if (vetor[i] > vetor[i + 1]){
				temp = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = temp;
				troquei = 1;
			}
		}
	}

	// Impressão do vetor //
	for (i = 0; i < 10000; i++){
		printf("%d\n", vetor[i]);
	}
}
