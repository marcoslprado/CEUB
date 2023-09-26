// Faça um algoritmo que leia dois números inteiros e mostre o resultado da multiplicação entre eles, se ambos forem positivos; ou a soma, se pelo menos um deles for negativo.
#include <stdio.h>

void main() {
    int a;
    int b;
    int resultado;
    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo numero: ");
    scanf("%d", &b);
    if(a > 0 && b > 0){
        resultado = a * b;
    } else{
        resultado = a + b;
    }
    printf("%d", resultado);
}
