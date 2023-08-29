// Matrizes Esparsas //
// Cache de memória secundária //
// Cache mantem uma copia de uma memoria que abre mais rapido //
// Cabeça aponta pra diretor, o qual possui 2 ponteiros, sendo um deles apontando para uma lista encadeada e o outro apontando para um outro diretor. //

// Programa que implementa uma matriz esparsa //

#include <stdio.h>
#include <stdlib.h>

// Declaracao de constantes //

const int MODULO = 5;

// Declaracao das estruturas //

struct no{ 
	int numero; // Numero e dividido pelo modulo. E usamos o resto para colocar o numero no lugar certo //
	struct no *proximoNo; 
};
struct diretor {
	int resto; 
	struct no *proximoNo;
	struct diretor *proximoDiretor;
};

// Declaracao de variaveis //

struct diretor *cabeca = NULL;

// Funcao que procura ou cria um diretor //

struct diretor *procurarDiretor(int restoProcurado) {
	struct diretor *ponteiro = cabeca;
	
	while ((ponteiro != NULL) && (ponteiro -> resto != restoProcurado)) { // Enquanto eu não rodar toda a lista ou achar o diretor com o resto que eu quero, o while e executado //
		ponteiro = ponteiro -> proximoDiretor;
	}
	
	if (ponteiro == NULL) { // Criação de um novo registro no caso de não achar o diretor //
		ponteiro = (struct diretor *) malloc(sizeof(struct diretor));
		ponteiro -> resto = restoProcurado; // Coloca o numero de resto que queremos no novo diretor //
		ponteiro -> proximoDiretor = cabeca; // Aponta o novo diretor pro diretor que a cabeca aponta //
		ponteiro -> proximoNo = NULL; // Aponta o ponteiro de no para nulo, visto que nao existem nos nesse diretor ainda //
		cabeca = ponteiro; // Aponta cabeca para o novo diretor //
	}
	
	return ponteiro;
}

// Funcao que insere um no na matriz esparsa //

void inserir(int numero) {
	struct diretor *diretorCerto = procurarDiretor(numero % MODULO);
	
	struct no *novoNo = (struct no *) malloc(sizeof(struct no));
	novoNo -> numero = numero; // Coloca o numero no novo No //
	novoNo -> proximoNo = diretorCerto -> proximoNo; // Aponta o novo No para o no que o diretor certo aponta //
	diretorCerto -> proximoNo = novoNo; // Aponta o diretor para o novo No (Entao o diretor aponta para o novo no que aponta para o que o diretor apontava antes. Resumindo, o elemento foi inserido na frente do diretor //
}

// Funcao que imprime a matriz esparsa //

void imprimir () {
	struct diretor *ponteiroDiretor = cabeca;
	
	printf("============================\n");
	printf("Resto\n");
	while (ponteiroDiretor != NULL) { // While passa por todos os diretores //
		printf("%d ->\t\a", ponteiroDiretor -> resto);
		struct no *ponteiroNo = ponteiroDiretor -> proximoNo;
		
		while (ponteiroNo != NULL) { // Para cada diretor temos um while que vai passar por todos os nos do diretor e imprimi-los //
			printf("%d\t", ponteiroNo -> numero);
			ponteiroNo = ponteiroNo -> proximoNo;
		}
		printf("\n");
		ponteiroDiretor = ponteiroDiretor -> proximoDiretor; // Passa para o proximo diretor //
	}
}

// Funcao que remove um no da matriz esparsa //

void remover(int numero) {
	struct diretor *diretorCerto = procurarDiretor(numero % MODULO);
	
	struct no *ponteiroAnterior;
	struct no *ponteiroExcluir;
	
	if (diretorCerto -> proximoNo != NULL) {
		if (diretorCerto -> proximoNo -> numero == numero) {
				ponteiroExcluir = diretorCerto -> proximoNo;
				diretorCerto -> proximoNo = diretorCerto -> proximoNo -> proximoNo ;
				free(ponteiroExcluir);
		} else{
			ponteiroAnterior = diretorCerto -> proximoNo;
			while ((ponteiroAnterior -> proximoNo != NULL) &&
				 	(ponteiroAnterior -> proximoNo -> numero != numero)) {
					ponteiroAnterior = ponteiroAnterior -> proximoNo;
			}
			if (ponteiroAnterior -> proximoNo != NULL) {
					ponteiroExcluir = ponteiroAnterior -> proximoNo;
					ponteiroAnterior -> proximoNo = ponteiroExcluir -> proximoNo;
					free(ponteiroExcluir);
			}
		}
	}
}

// Funcao principal de execucao do programa //

int main() {
	int i = 0;
	
	for (i = 0; i < 37; i++) {
		inserir(i);
	}
	
	imprimir();
	
	remover(7);
	
	imprimir();
	
}
