#include <stdio.h>
#include <stdlib.h>

struct Conta {
    char nomeCliente[100];
    int numeroConta;
    float saldo;
};
void Cadastro(struct Conta vetor[], int i) {
    printf("Qual seu nome? ");
    scanf("%s", &vetor[i].nomeCliente);
    vetor[i].numeroConta = i+1;
    printf("Digite o saldo da conta para cadastro: ");
    scanf("%f", &vetor[i].saldo);
    i++;
}

void Busca() {

}

void Exclusao() {

}

void main() {
    struct Conta vetor[100];
    int numContas = 1;
    int opcao;
    while (opcao != 4) {
        for (int i = 0; i < 2; i++) {
            printf("o------");
            Sleep(1);
            system("cls");
            printf("-o-----");
            Sleep(1);
            system("cls");
            printf("--o----");
            Sleep(1);
            system("cls");
            printf("---o---");
            Sleep(1);
            system("cls");
            printf("----o--");
            Sleep(1);
            system("cls");
            printf("-----o-");
            Sleep(1);
            system("cls");
            printf("-------o");
            Sleep(1);
            system("cls");
        }
        printf("|=====================================================|\n");
        printf("|------------------------BANCO------------------------|\n");
        printf("|=====================================================|\n");
        printf("|1. Cadastrar Conta                                   |\n");
        printf("|2. Visualizar todas as contas de determinado cliente |\n");
        printf("|3. Excluir a conta com menor saldo                   |\n");
        printf("|4. Sair                                              |\n");
        printf("|=====================================================|\n");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            Cadastro(vetor, numContas);
            numContas++;
        case 2:
            Busca();
        case 3:
            Exclusao();
        case 4:
            break;
        }
    }
}
