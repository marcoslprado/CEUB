#include <stdio.h>

struct Conta {
    char nomeCliente[100];
    int numeroConta;
    float saldo;
};

void Cadastro() {
}

void Busca() {

}

void Exclusao() {

}

void main() {
    int opcao;
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
        Cadastro();
    case 2:
        Busca();
    case 3:
        Exclusao();
    case 4:
        break;
    }
}
