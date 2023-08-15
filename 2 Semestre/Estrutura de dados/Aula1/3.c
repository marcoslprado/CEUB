// Programa de Transposição de Matriz //
//Importação de pacotes
#import <stdio.h>

int matrizOriginal[2][3];
int matrizTransposta[3][2];
int i = 0;
int j = 0;

//////////////////////////////////////////////
// Função principal de execução do código //
/////////////////////////////////////////////

int main() {
	// Limpeza das matrizes //
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			matrizOriginal[i][j] = 0;
			matrizTransposta[j][i] = 0;
		}
	}
	// Preenchimento da matriz Original //
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
		printf("Digite o valor matriz [%d] [%d]: ", i, j);
		scanf("%d", &matrizOriginal[i][j]);
	}
	}

	// Transposição da matriz //
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			matrizTransposta[j][i] = matrizOriginal[i][j];
		}
	}
	// Impressão das matrizes //
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
		printf("%d\t", matrizOriginal[i][j]);
}
	printf("\n");
}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
		printf("%d\t", matrizTransposta[i][j]);
}
	printf("\n");
}
}