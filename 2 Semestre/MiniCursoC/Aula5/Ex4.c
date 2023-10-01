// Faça um programa que receba 2 vetores de mesmo tamanho, some e diminua esses dois vetores e  depois imprima o vetor resultado.

#include <stdio.h>

void main() {
    int vetor1[2]; // Declaracao de variaveis //
    int vetor2[2];
    int vetorSoma[2];
    int vetorSubtracao[2];
    int i, value;
    for (i = 0; i < 2; i++) { // Input vetor 1 //
        printf("Digite o valor %d do vetor 1: ", i+1);
        scanf("%d", &value);
        vetor1[i] = value;
    }
    for (i = 0; i < 2; i++) { // Input vetor 2 //
        printf("Digite o valor %d do vetor 2: ", i+1);
        scanf("%d", &value);
        vetor2[i] = value;
    }
    for (i = 0; i < 2; i++) { // A cada loop faz a soma dos numeros dos vetores 1 e 2 e armazena no vetorSoma //
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }
    for (i = 0; i < 2; i++) { // A cada loop faz a subtracao dos numeros dos vetores 1 e 2 e armazena no vetorSubtracao //
        vetorSubtracao[i] = vetor1[i] - vetor2[i];
    }

    printf("Vetor Soma: \n");
    for (i = 0; i < 2; i++) { // Loop para imprimir os numeros do vetorSoma //
        printf("%d\n", vetorSoma[i]);
    }
    printf("Vetor subtracao: \n");
    for (i = 0; i < 2; i++) { // Loop para imprimir os numeros do vetorSubtracao //
        printf("%d\n", vetorSubtracao[i]);
    }


}
