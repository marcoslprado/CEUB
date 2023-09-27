#include <stdio.h>

void main() {
    int num;
    int i;
    printf("Digite um numero inteiro positivo: ")/
    scanf("%d", &num);
    for (i = 0; i <= num; i++) {
        printf("%d\n", i);
    }
}
