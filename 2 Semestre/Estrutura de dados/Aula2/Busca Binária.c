// Programa de Busca Binária (é preciso ordenar o vetor para fazer a busca. Começa depois pelo número médio e se o número for menor, verifica só os da esquerda, senão os da direita) //

#include <stdio.h>

// Declaração de variáveis //
int vetor[10000];
int i = 0;
int inicio = 0;
int fim = 0;
int meio = 0;
int busca = 0;

// Função Principal de execução do programa //

int main() {
	// Inicialização do vetor //
	for (i = 0; i < 10000; i++){
		vetor[i] = i;
	}
		// Definição da busca //
	printf("Digite o numero a ser buscado: ");
	scanf("%d", &busca);
	
	// Busca propriamente dita //
	inicio = 0;
	fim = 9999;
	while (fim >= inicio) {
		meio = (inicio + fim) /2;
		
		if (vetor[meio] == busca) {
			printf("Achei !!!!");
			return 0;
		} else if (vetor[meio] > busca){
			fim = (meio - 1);
		} else {
			inicio = (meio + 1);
		}
	}
	printf("Se fodeu! Nao existe!");
}
