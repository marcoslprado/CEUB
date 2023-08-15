// Programa de Multiplicação de Matrizes //
//Importação de pacotes
#import <stdio.h>
// Declaração de variáveis
int operando1[2][3];
int operando2[3][2];
int resultado[2][2];
int i = 0;
int j = 0;
int k = 0;
//////////////////////////////////////////////
// Função principal de execução do código //
/////////////////////////////////////////////

int main() {
	// Limpeza das matrizes //
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			operando1[i][j] = 0;
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			operando2[i][j] = 0;
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			resultado[i][j] = 0;
		}
	}
	// Preenchimento dos operandos //
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
		printf("Digite o valor operando1 [%d] [%d]: ", i, j);
		scanf("%d", &operando1[i][j]);
	}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
		printf("Digite o valor operando2 [%d] [%d]: ", i, j);
		scanf("%d", &operando2[i][j]);
	}
	}
	// Cálculo da multiplicação //
    for (i = 0; i < 3; i++){
        resultado[0][0] += operando1[0][i] * operando2[i][0];
    }
    for (i = 0; i < 3; i++){
        resultado[0][1] += operando1[0][i] * operando2[i][1];
    }
    for (i = 0; i < 3; i++){
        resultado[1][0] += operando1[1][i] * operando2[i][0]; 
    }
    for (i = 0; i < 3; i++){
        resultado[1][1] += operando1[1][i] * operando2[i][1]; 
    }
	// Impressão do resultado //
	printf("Operando 1:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
		printf("%d\t", operando1[i][j]);
}
	printf("\n");
}
	printf("Operando 2:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
		printf("%d\t", operando2[i][j]);
}
	printf("\n");
}
	printf("Resultado:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
		printf("%d\t", resultado[i][j]);
}
	printf("\n");
}
}