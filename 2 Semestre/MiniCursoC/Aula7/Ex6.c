#include <stdio.h>

void main() {
    int v[10] = {1,2,3,4,5,6,7,8,9,10}, i;
    int *p = &v[0];
    for (i = 0; i < 10; i++) {
        *p *= 2;
        p += 1;
    }
    for (i = 0; i < 10; i++) {
        printf("Valor %d do vetor: %d\n", i, v[i]);
    }
}
