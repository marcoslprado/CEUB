#include <stdio.h>

void main() {
    int a = 5, b = 6, c = 7; // Declaracao de variaveis
    int v[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int *pt1, *pt2, *pt3;
    pt1 = &a; // pt1 recebe endereco de a //
    pt2 = &b; // pt2 recebe endereco de b //
    pt3 = &c; // pt3 recebe endereco de c //
    pt2 = pt1; // pt2 = &a, pt1 = &a //
    *pt3 = *pt2 + 2000; // *pt3 = 5 + 2000 = 2005 // Logo, c =2005
    pt1 = &v[8]; // *pt1 = 80 //
    for (int k = 0; k < 2; k++) {
        *pt1 = *pt1 - 5; // Valor que o ponteiro aponta diminui em 5
        pt1 = pt1 - 3; // Ponteiro aponta para o terceiro elemento anterior do vetor //
        // A)  a = 5, b = 6, c = 2005
        // B) v[10] = (0,10,20,30,40,45,60,70,75,90) //
    }
    printf("a = %d\n", a); // Teste para ver se acertei //
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    for (a = 0; a < 10; a++) {
        printf("Elemento %d do vetor: %d\n", a, v[a]);
    }
}

