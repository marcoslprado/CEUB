// Fazer um programa que solicite 2 números e informe:
// a) A soma dos números;
// b) O produto do primeiro número pelo quadrado do segundo;
// c) O quadrado do primeiro número;
// d) O módulo do primeiro número.

#include <stdio.h>
#include <math.h>

void main() {
    double num1; // Declaracao de variaveis //
    double num2;
    printf("Digite um numero: "); // Input primeiro numero //
    scanf("%lf", &num1);
    printf("Digite outro numero: "); // Input segundo numero //
    scanf("%lf", &num2);
    printf("Soma: %lf\n", num1+num2); // Imprime a soma dos dois numeros //
    printf("Produto do primeiro pelo quadrado do segundo: %lf\n", num1 * (pow(num2,2))); // Imprime o produto do num1 pelo quadrado do num2, utilizando a funcao "pow" da biblioteca math.h //
    printf("Quadrado do primeiro numero: %lf\n", pow(num1,2)); // Imprime o quadrado do num1 utilizando a funcao "pow" da biblioteca math.h //
    if (num1 < 0) { // Se o num1 for negativo, seu modulo sera o numero com sinal trocado //
    printf("Modulo do primeiro numero: %lf", -(num1));
    } else{ // Caso contrario o modulo sera o proprio num1
        printf("Modulo do primeiro numero: %lf", num1);
    }
}
