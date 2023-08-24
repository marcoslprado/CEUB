// Programa que implementa uma fila FIFO com saida na cabeca //

#include <stdio.h>
#include <stdlib.h>

// Declaracao da estrutura //

struct no{
    int numero;
    struct no *proximo;
};

// Declaracao de variaveis //

struct no *cabeca = NULL;

// Funcao que insere um no na fila //

void inserir (int numero) {
    // instanciacao da memoria //
    struct no *novoNo = (struct no *) malloc(sizeof(struct no));
    struct no *ponteiro = cabeca; // Criação de um ponteiro para percorrer a fila e deixar o novoNo no lugar certo //
    novoNo -> numero = numero;
    if (cabeca == NULL) { // No caso da lista estar vazia //
        cabeca = novoNo;
        novoNo -> proximo = NULL;
    } else {
        while (ponteiro -> proximo != NULL) { // While para achar o último elemento a entrar na fila //
            ponteiro = ponteiro -> proximo;
        }
        ponteiro -> proximo = novoNo; // Inserção do elemento novo no fim da fila
        novoNo -> proximo = NULL; // Deixar o novoNo apontando para NULL já que por enquanto não têm elementos atrás dele na fila //
    }
}

// Funcao que imprime a fila //

void imprimir (){
    struct no *ponteiro = cabeca;
    while (ponteiro != NULL) {
        printf("%d\n", ponteiro -> numero);
        ponteiro = ponteiro -> proximo;
    }
}

// Funcao que remove o primeiro elemento a entrar na fila //

int remover () {
    struct no *temp = cabeca; // Novo ponteiro para ficar no no a ser excluido da fila //
    cabeca = cabeca -> proximo; // Ajuste da cabeca para apontar para o proximo elemento da fila //
    free(temp); // Exclusao da memoria em si //
}

int main() {
    inserir(1);
    inserir(2);
    inserir(3);
    inserir(4);
    inserir(5);
    imprimir();
    remover();
    remover();
    printf("==========================\n");
    imprimir();
}