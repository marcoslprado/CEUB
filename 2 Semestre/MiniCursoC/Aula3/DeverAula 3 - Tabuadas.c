// Nesse exercício queremos que vocês criem um programa que mostra a tabuada completa de um número (a ser digitado) e da tabuada de seus antecessores .

#include <stdio.h>

void tabuada(i) {
    printf("Tabuada do %d:\n", i);
    printf("=========================\n");
    printf("%d * 1 = %d\n", i, i*1);
    printf("%d * 2 = %d\n", i, i*2);
    printf("%d * 3 = %d\n", i, i*3);
    printf("%d * 4 = %d\n", i, i*4);
    printf("%d * 5 = %d\n", i, i*5);
    printf("%d * 6 = %d\n", i, i*6);
    printf("%d * 7 = %d\n", i, i*7);
    printf("%d * 8 = %d\n", i, i*8);
    printf("%d * 9 = %d\n", i, i*9);
    printf("%d * 10 = %d\n", i, i*10);
    printf("=========================\n");
}

void main() {
    int i = 1;
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    while (i <= number) {
        tabuada(i);
        i++;
    }
}
