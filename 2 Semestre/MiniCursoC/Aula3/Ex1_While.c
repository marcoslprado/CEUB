#include <stdio.h>

void main() {
    int i = 0;
    int numberOfGrades;
    float average = 0;
    float grade;
    printf("Digite quantas notas voce ira preencher: ");
    scanf("%d", &numberOfGrades);
    while (i < numberOfGrades) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &grade);
        average += grade;
        i++;
    }
    average/= numberOfGrades;
    printf("A media do aluno e %.2f", average);
}
