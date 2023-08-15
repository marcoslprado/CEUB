////////////////////////////////////////////////
// Programa de Preenchimenhto de Vetor //
////////////////////////////////////////////////

//Importação de pacotes
#import <stdio.h>

// Declaração de variáveis
int vetor[10];
int i = 0;

//////////////////////////////////////////////
// Função principal de execução do código //
/////////////////////////////////////////////

int main() {
	// Limpeza da memória
	for (i = 0; i < 10; i++) {
		vetor[i] = 0;
	}
	
	// Preenchimento do vetor
	for (i = 0; i < 10; i++) {
		printf("Digite o valor da posicao %d do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
	
	// Impressão do vetor
	for (i = 0; i < 10; i++) {
		printf("vetor[%d] = %d\n", i, vetor[i]);
}
}