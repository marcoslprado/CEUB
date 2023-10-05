// Crie um vetor de struct chamada Viagem com os campos "origem", "destino", "data" e "preco". Crie uma funcao que mostre a viagem mais cara. //

#include <stdio.h>

struct viagem { // Criacao da struct viagem //
    char origem[100]; // Declaracao dos atributos da struct //
    char destino[100];
    char data[100];
    float preco;
};


void maiorPreco(struct viagem vetor[]) { // Funcao que acha a viagem mais cara //
    float maisCara = 0; // Declaracao de variavel //
    for (int i = 0; i < 3; i++) { // For que testa todas as viagens do vetor e encontra a de maior preco comparando a variavel maisCara com os precos de cada viagem do vetor //
        if (vetor[i].preco > maisCara) {
            maisCara = vetor[i].preco;
        }
    }
    for (int i = 0; i < 3; i++) { // For que roda as viagens do vetor e encontra a com o preco == maisCara, printando assim todos os atributos da viagem //
        if (maisCara == vetor[i].preco) {
            printf("A viagem mais cara eh a de origem %s, destino %s, data %s e preco %.2f", vetor[i].origem, vetor[i].destino, vetor[i].data, vetor[i].preco);
            break; // Quando a viagem eh encontrada, acontece o break para nao precisar rodar todo o for //
        }
    }
}
void main() {
    struct viagem vetor[3]; // Declaracao do vetor de viagens //
    for (int i = 0; i < 3; i++) { // For que faz o input dos atributos de todas as viagens do vetor //
        printf("Origem da viagem %d: ", i+1);
        scanf("%s", &vetor[i].origem);
        printf("Destino da viagem %d: ", i+1);
        scanf("%s", &vetor[i].destino);
        printf("Data da viagem %d: ", i+1);
        scanf("%s", &vetor[i].data);
        printf("Preco da viagem %d: ", i+1);
        scanf("%f", &vetor[i].preco);
    }
    maisCara(vetor); // Chama a funcao maiorPreco //
}
