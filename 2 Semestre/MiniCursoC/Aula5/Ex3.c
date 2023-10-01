// Escrever um programa que solicita ao usuario um conjunto de 4 valores reais e verifica quantos estao acima da media(dois casa decimal).

#include <stdio.h>

void main() {
    float value;
    float list[4];
    float soma = 0;
    int count = 0, i;
    for (i = 0; i < 4; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &value);
        list[i] = value;
        soma += value;
    }
    soma /= 4;
    printf("Media : %.2f\n", soma);
    for (i = 0; i < 4; i++) {
        if (list[i] > soma) {
            count++;
        }
    }
    printf("Acima da media: %d", count);
}
