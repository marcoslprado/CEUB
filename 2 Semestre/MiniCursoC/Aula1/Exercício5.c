// Exercicio 5 -> Receba um valor em Real (R$) (float) e mostre a conversão para Dólar(5 R$) e Euro(5.2 R$). //

#include <stdio.h>

void main() {
    float value = 0;
    printf("Digite um valor em Real(R$): ");
    scanf("%f", &value);
    float dolarValue = value/5;
    float euroValue = value/5.2;
    printf("Dolar: %.2f", dolarValue);
    printf("\nEuro: %.2f", euroValue);
}
