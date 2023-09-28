// Desafio: Fazer a soma dos numeros pares e a soma dos numeros impares ate 10 sem usar while, for ou if //
#include <stdio.h>

void main() {
    int somaPares = 0;
    int somaImpares = 0;
    int num = 1;

    voltar:
        somaImpares += num;
        num++;
        somaPares += num;
        num++;
        switch (num) {
            case (11) :
                goto fim;
            default:
                goto voltar;
        }
    fim:
        printf("Soma dos pares: %d\n", somaPares);
        printf("Soma dos impares: %d", somaImpares);
}
