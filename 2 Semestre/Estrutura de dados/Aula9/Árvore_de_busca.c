// Arvores de busca -> Eficiencia brabissima //
// Um numero menor que a raiz sempre fica a esquerda da mesma, e um maior, a direita //

// Programa que Implementa uma Arvore de Busca //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaracao de estruturas //

struct no {
	int numero;
	struct no *esquerda;
	struct no *direita;
};

// Funcao que insere um no na arvore de busca//

struct no *inserir(struct no *raiz, int numero) {
	if (raiz == NULL) {
		raiz = (struct no *) malloc(sizeof(struct no));
		raiz -> numero = numero;
		raiz -> esquerda = NULL;
		raiz -> direita = NULL;
	} else {
		if (numero < raiz -> numero) {
			raiz -> esquerda = inserir(raiz -> esquerda, numero);
		} else if (numero > raiz -> numero) {
			raiz -> direita = inserir(raiz -> direita, numero);
		}
	}
	
	return raiz;
}

// Funcao que busca um no na arvore de busca//

void buscar(struct no *raiz, int numero) {
	if (raiz == NULL) {
		printf("NÂO ACHEI !!!");
	} else if (raiz -> numero == numero) {
			printf("ACHEI !!!");
	} else if (raiz -> numero > numero) {
			buscar(raiz -> esquerda, numero);
	} else{
			buscar (raiz -> direita, numero);
	}
}

// Funcao que navega a arvore em ordem //

void navegar(struct no *raiz) {
	if (raiz != NULL) {
		navegar(raiz -> esquerda);
		printf("%d\t", raiz -> numero);
		navegar(raiz -> direita);
	}
}

// Funcao principal de execucao do programa //

int main() {
	// Declaracao de variaveis //
	struct no *raiz = NULL;
	int opcao = 0;
	int numero = 0;
	int i = 0;
	
	// Inicializacao da aleatoriedade //
	time_t t;
	srand((unsigned) time(&t));
	
	// Menu de opcoes //
	while (opcao != 5) {
		printf("\n");
		printf("+================================+\n");
		printf("|       Menu de opcoes           |\n");
		printf("+================================+\n");
		printf("|   1. Criar Arvore aleatoria    |\n");
		printf("|   2. Inserir No na Arvore      |\n");
		printf("|   3. Buscar No na Arvore       |\n");
		printf("|   4. Navegar a Arvore          |\n");
		printf("|   5. Sair                      |\n");
		printf("+================================+\n");
		printf("Digite sua opcao: ");
		scanf("%d", &opcao);
		
		switch (opcao) {
			case 1:
				for (i = 0; i < 100; i++) {
					raiz = inserir(raiz, rand());
				}
				break;
			case 2:
				printf("Digite o numero: ");
				scanf("%d", &numero);
				raiz = inserir(raiz, numero);
				break;
			case 3:
				printf("Digite o numero: ");
				scanf("%d", &numero);
				buscar(raiz, numero);
				break;
			case 4:
				navegar(raiz);
				break;
		}
	}
}
