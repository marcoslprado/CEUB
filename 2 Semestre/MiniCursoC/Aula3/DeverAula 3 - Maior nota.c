// O professor aplicou a avaliação em sua turma e deseja selecionar a maior nota e
// sua respectiva frequência, ou seja, a quantidade de alunos que conseguiu a maior
// nota. Desenvolva o programa que leia a nota dos alunos e gere a tela de saída com as informações solicitadas.

    #include <stdio.h>

    void main() {
        float grade; // Declaracao de variaveis //
        int quantity;
        int i = 0;
        int count = 0;
        float bestGrade = 0;
        printf("Digite quantas notas deseja inserir no programa: "); // Input do quantity //
        scanf("%d", &quantity);
        float grades[quantity]; // Criacao de uma lista com o numero de elementos do quantity //
        while (i < quantity) { // While roda enquanto i for menor que quantity //
            printf("Digite a nota %d: ", i + 1); // Input notas //
            scanf("%f", &grade);
            grades[i] = grade; // Adiciona a nota digitada a lista

            if (grade > bestGrade) {
                bestGrade = grade;
                count = 1;  // Reseta o contador para 1 se encontrarmos uma nota maior
            } else if (grade == bestGrade) {
                count++;  // Incrementa o contador se encontrarmos outra nota igual à maior
            }

            i++; // Incrementa o i //
        }
        printf("A maior nota foi %.2f\n", bestGrade); // Imprime a melhor nota //
        printf("%d pessoas tiraram essa nota.", count); // Imprime o numero de pessoas que tiraram essa nota //
    }
