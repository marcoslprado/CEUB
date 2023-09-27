// Crie um programa que imprima uma tabela de conversão de graus Fahrenheit para Celsius, conforme um intervalo definido
// pelo usuário. O algoritmo em C deve solicitar ao usuário o limite superior do intervalo e um valor de incremento.
//Para a realização dos cálculos, considere a seguinte fórmula:
//                    C = (F - 32) * (5/9)
//Considere sempre o valor do limite inferior como 10.

#include <stdio.h>

void main() {
    float limitValue; // Declaracao de variaveis //
    float incrementValue;
    float fahrenheitValue = 10;
    float celsiusValue;
    printf("Digite o limite superior do intervalo: "); // Input do limitValue
    scanf("%f", &limitValue);
    printf("Digite o valor de incremento na tabela: "); // Input do incrementValue //
    scanf("%f", &incrementValue);
    while (fahrenheitValue <= limitValue) { // Enquanto o fahrenheit value for menor que o limit value o while vai rodar //
        celsiusValue = (fahrenheitValue - 32) * (5.0/9.0); // Calcula o valor em Celsius com base no valor em Fahrenheit atual//
        printf("Fahrenheit: %.2f \t Celsius: %.2f\n", fahrenheitValue, celsiusValue); // Imprime o valor atual em Fahrenheit e seu correspondente em Celsius //
        fahrenheitValue+= incrementValue; // Incrementa o fahrenheit com o valor digitado pelo usuario como incrementValue //
    }
}
