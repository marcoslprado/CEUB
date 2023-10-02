#include <stdio.h>

void main() {
    int i, j, value, matriz[3][3];
    float media = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Insira o valor de [%d][%d] da matriz: ", i, j);
            scanf("%d", &value);
            matriz[i][j] = value;
            media+= value;
        }
    }
    printf("A media dos valores da matriz e: %.2f", media/9);
}
