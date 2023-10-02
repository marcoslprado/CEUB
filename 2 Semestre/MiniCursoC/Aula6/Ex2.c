// Programa que calcula determinante de uma matriz 3x3 //
#include <stdio.h>

void main() {
    int matriz[3][3];
    int value, i, j;
    int determinanteDireita, determinanteEsquerda, detFinal;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Insira o valor de [%d][%d]: ", i, j);
            scanf("%d", &value);
            matriz[i][j] = value;
        }
    }
    determinanteDireita = matriz[0][0] * matriz[1][1] * matriz[2][2] + matriz[0][1] * matriz[1][2] * matriz[2][0] + matriz[0][2] * matriz[1][0] * matriz[2][1];
    determinanteEsquerda = -(matriz[0][1] * matriz[1][0] * matriz[2][2]) -(matriz[0][0] * matriz[1][2] * matriz[2][1]) -(matriz[0][2] * matriz[1][1] * matriz[2][0]);
    detFinal = determinanteDireita + determinanteEsquerda;
    printf("Determinante da matriz: %d", detFinal);
}
