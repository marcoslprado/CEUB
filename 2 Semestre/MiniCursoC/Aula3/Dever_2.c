// Faça um programa que receba N números inteiros, e todos os números menores ou igual a 0 passem a ser 1 . (usa FOR)
#include <stdio.h>

void main() {
    int quantity; // Declaração de variáveis //
    int i;
    int value;
    printf("Diqite quantos numeros deseja inserir: "); // Input que atribui a quantity, a quantidade de numeros a serem digitados pelo usuario //
    scanf("%d", &quantity);
    int listOfValues[quantity]; // Declara uma lista do tamanho da quantidade de numeros que o usuario inseriu //
    for (i = 0; i < quantity; i++) { // For vai rodar enquanto o i for menor do que quantity. A cada loop do for o i incrementa um //
        printf("Digite o numero %dº: ", i+1); // Input da variavel value //
        scanf("%d", &value);
        if (value <= 0) { // Se value for negativo ou 0, atribuímos 1 no seu lugar//
            value = 1;
        }
        listOfValues[i] = value; // Adiciona o valor de value ja corrigido(se necessario) a lista //
    }
    for (i = 0; i < quantity; i++) { // For vai rodar enquanto i for menor que quantity. O i incrementa a cada loop. //
        printf("%d\n", listOfValues[i]); // Imprime os elementos da lista com quebra de linha //
    }
}
