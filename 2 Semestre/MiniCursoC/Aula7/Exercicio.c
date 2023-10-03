#include <stdio.h>

void main() {
    int a = 5, b = 12; // Declaracao de variaveis //
    int *p; // Declaracao de ponteiros //
    int *q;
    p = &a; // p recebe o endereco de a //
    q = &b; // q recebe o endereço de b //
    int c = *p + *q; // c = valor armazenado no ponteiro, no caso 5, vindo do a + valor armazenado em q, no caso 12, vindo de b // Logo, c = 17;
}
