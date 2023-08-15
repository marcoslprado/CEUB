// Programa de Lista Encadeada Circular //
// Cada nó possui um ponteiro que aponta para o próximo e um que aponta para a cabeça //

#include <stdio.h>
#include <stdlib.h>

// Programa de Lista Encadeada Circular


// Definição da Estrutura do Nó

struct no {
int numero;
struct no *proximo;
};

// Declaracao de Variáveis
struct no *cabeca;

// funcao que insere um nó na lista

void inserir(int parametroNumero){
//Criar um novo no
struct no *novoNo = NULL;
novoNo = (struct no *) malloc(sizeof(struct no *)); // Para inserir tem que alocar memória com alloc
novoNo -> numero = parametroNumero;
novoNo -> proximo = cabeca; // Ao inves de apontar pra NULO, aponta para a cabeca agora
if (cabeca == NULL) {  //cabeca, lista está vazia
cabeca = novoNo;
cabeca -> proximo = cabeca;
} else { //lista cheia
// Procurar o Ultimo elemento da lista
struct no *ponteiro = cabeca; 
while (ponteiro -> proximo != cabeca){
ponteiro = ponteiro -> proximo;
}
//Apontar o ultimo para o novo
ponteiro -> proximo = novoNo;
}
}

// Funcao que imprime os elementos da lista (os nós)

void imprimir (){
struct no *ponteiro = cabeca;
while (true) {
printf("%d\n", ponteiro -> numero);
ponteiro = ponteiro -> proximo;
if (ponteiro == cabeca) {
break;
}
}
}

// Funcao principal de execucao do programa

int main() {
inserir(1);
inserir(2);
inserir(3);
inserir(4);
inserir(5);
inserir(6);
imprimir();
}
