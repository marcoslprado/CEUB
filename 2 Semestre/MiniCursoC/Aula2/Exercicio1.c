//O professor aplicou a avalia��o em sua turma e deseja mostrar se o aluno foi aprovado (nota maior ou igual a 5) ou reprovado(nota menor que 5). Desenvolva o programa que leia a no
//ta do aluno e gere a tela de sa�da com as informa��es solicitadas. Fa�a o teste de mesa do c�digo

#include <stdio.h>

void main() {
    float grade;
    printf("Digite a nota do aluno: ");
    scanf("%f", &grade);
    if (grade < 5) {
        printf("O aluno foi reprovado.");
    } else {
    printf("O aluno foi aprovado");
    }
}
