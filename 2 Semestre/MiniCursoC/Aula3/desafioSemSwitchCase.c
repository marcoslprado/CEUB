// Desafio: Fazer a soma dos numeros pares e a soma dos numeros impares ate 10 sem usar while, for ou if //
#include <stdio.h>
int somaPares = 0;
int somaImpares = 0;
int num = 1;
void soma(num){
    somaImpares += num;
    num++;
    somaPares += num;
    num++;
    num < 11 ? soma(num) : printf("\n");
}

void main() {
    soma(num);
    printf("Soma dos pares: %d\n", somaPares);
    printf("Soma dos impares: %d", somaImpares);
}
