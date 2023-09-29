#include <stdio.h>

void mediaA(float grade1, float grade2, float grade3) {
    float media1 = (grade1 + grade2 + grade3) / 3.0;
    printf("Media aritmetica: %.2f", media1);
}

void mediaP(float grade1, float grade2, float grade3) {
    float media2 = (grade1 * 5.0 + grade2 * 3.0 + grade3 * 2.0) / 10.0;
    printf("Media ponderada: %.2f", media2);
}

void main() {
    float grade1, grade2, grade3;
    char opcao;
    int i = 1;
    printf("Digite a nota %d: ", i);
    scanf("%f", &grade1);
    i++;
    printf("Digite a nota %d: ", i);
    scanf("%f", &grade2);
    i++;
    printf("Digite a nota %d: ", i);
    scanf("%f", &grade3);
    printf("Digite A para media aritmetica ou P para media ponderada: ");
    scanf(" %c", &opcao);
    if (opcao == 'A') {
        mediaA(grade1, grade2, grade3);
    } else {
        mediaP(grade1,grade2,grade3);
    }
}
