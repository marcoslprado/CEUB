// Crie um vetor de struct chamada Viagem com os campos "origem", "destino", "data" e "preço". Crie uma função que mostre a viagem mais cara. //

#include <stdio.h>

struct viagem {
    char origem[100];
    char destino[100];
    char data[100];
    float preco;
};

void main() {
    struct viagem vetor[3];
    for (int i = 0; i < 3; i++) {
        printf("Origem da viagem %d: ", i+1);
        scanf("%[^\n]", &vetor[i].origem);
        printf("Destino da viagem %d: ", i+1);
        scanf("%[^\n]", &vetor[i].destino);
        printf("Data da viagem %d: ", i+1);
        scanf("%s", &vetor[i].data);
        printf("Preco da viagem %d: ", i+1);
        scanf("%f", &vetor[i].preco);
    }
}
