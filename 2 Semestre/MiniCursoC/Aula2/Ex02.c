#include <stdio.h>

void main() {
    int age;
    printf("Digite a sua idade: ");
    scanf("%d", &age);
    if (age <= 9) {
        printf("Mirim");
    } else if (age < 14) {
        printf("Infantil");
    } else if (age < 18) {
        printf("Juvenil");
    } else {
        printf("Adulto");
    }
}
