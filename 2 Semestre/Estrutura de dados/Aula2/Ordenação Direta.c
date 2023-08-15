// Na aula de hoje teremos algoritmos de ordenação e algoritmos de busca //
// Tarefa: Pesquisar o algoritmo QuickSoft em C(Pode pedir para o chat GPT) //

// Programa de Ordenação Direta(Fixa um número e compara com todos os outros)//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração de variáveis //
int vetor[10000];
int i = 0;
int j = 0;
time_t t;
int temp;
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
	for (i = 0; i < 9999; i++){ // Do primeiro ao penúltimo número
		for (j = (i + 1); j < 10000; j++){ // Do próximo ao último número
			if (vetor[j] < vetor[i]) {
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}

	// Impressão do vetor //
	for (i = 0; i < 10000; i++){
		printf("%d\n", vetor[i]);
	}
}
