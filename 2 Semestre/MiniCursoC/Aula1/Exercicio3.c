#include <stdio.h>

// Fa�a um programa que recebe um valor inteiro [ scanf("%d", &variavel) ], soma esse valor com 9, salva na pr�pria variavel e o mostre na tela //

void main() {
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    num += 9;
    printf("%d", num);
}
