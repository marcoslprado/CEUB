/* Crie uma struct chamada Aluno com os campos "nome", "idade" e "notas". O campo "notas" deve
ser um vetor, representando as notas que o aluno tirou em uma determinada disciplina. Escreva funções que possam calcular a
 média das notas e imprimir o nome, idade e média do aluno.
*/

#include <stdio.h>

struct Aluno {
    char nome[100];
    int idade;
    float notas[4];
};

float media(struct Aluno aluno) {
    float soma = 0;
    for (int i = 0; i < 4; i++) {
        soma+= aluno.notas[i];
    }
    soma /= 4;
    return soma;
}

void printar (struct Aluno aluno) {
    printf("Nome do aluno: %s\n", aluno.nome);
    printf("Idade do aluno: %d\n", aluno.idade);
    printf("Media do aluno: %.2f", media(aluno));
}
void main() {
    struct Aluno aluno = {"Marcola", 18,{9,10,9.5,9.8}};
    printar(aluno);
}
