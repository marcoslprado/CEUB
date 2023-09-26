// Exemplo 5 Slide

#include <stdio.h>

void main() {
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("O numero e par.");
    } else{
        printf("O numero e impar.");
    }
}
