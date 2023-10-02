// Elabore um algoritmo que preencha duas matrizes 3×3 com valores e em seguida, determine se as matrizes são iguais (possuem os mesmos valores em cada posição). //

#include <stdio.h>

void main() {
    int i, j, value, matriz1[3][3], matriz2[3][3], teste = 1;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Insira o valor de [%d][%d] da matriz1: ", i, j);
            scanf("%d", &value);
            matriz1[i][j] = value;
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Insira o valor de [%d][%d] da matriz2: ", i, j);
            scanf("%d", &value);
            matriz2[i][j] = value;
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz1[i][j] != matriz2[i][j]) {
                teste = 0;
                break;
            }
        }
    }
    if (teste == 0) {
        printf("\nAs duas matrizes sao diferentes.");
    } else {
        printf("\nAs duas matrizes sao iguais.");
    }
}
