#include <stdio.h>

void main() {
    int i;
    float grade;
    float average = 0;
    for (i = 1; i < 4; i++) {
        printf("Insira a nota %d: ", i);
        scanf("%f", &grade);
        average += grade;
    }
    average /= 3;
    if (average >= 7){
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
}
