
// Faça uma função que receba um inteiro e mostre na tela se ele for múltiplo de 2.

#include <stdio.h>

void teste(num) {
    if (num % 2 == 0) {
        printf("O numero e multiplo de 2.");
    } else {
        printf("O numero NAO e multiplo de 2.");
    }
}

void main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    teste(num);
}
