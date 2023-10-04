#include <stdio.h>

struct registro{
    char nome[100];
    float salario;
    char CPF[100];
    int idade;
    char sexo;
};

void printar(struct registro ficha) {
    printf("Nome: %s\n", ficha.nome);
    printf("Salario: %.2f\n", ficha.salario);
    printf("CPF: %s\n", ficha.CPF);
    printf("Idade: %d\n", ficha.idade);
    printf("Sexo: %c", ficha.sexo);
}
void main() {
    struct registro ficha;
    printf("Insira seu nome: ");
    scanf("%s", &ficha.nome);
    printf("Insira seu salario: ");
    scanf("%f", &ficha.salario);
    printf("Insira seu CPF: ");
    scanf("%s", &ficha.CPF);
    printf("Insira sua idade: ");
    scanf("%d", &ficha.idade);
    printf("Coloque 'M' para sexo Masculino ou 'F' para feminino: ");
    scanf(" %c", &ficha.sexo);
    printar(ficha);
}
