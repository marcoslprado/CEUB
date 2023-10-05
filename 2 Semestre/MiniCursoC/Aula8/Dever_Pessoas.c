/*Crie uma struct chamada Pessoa com os campos "nome", "idade" e "endere�o". O campo "endere�o"
deve ser uma outra struct com os campos "rua", "n�mero", "cidade" e "estado". Escreva uma fun��o que receba uma Pessoa como par�metro e imprima seu endere�o completo.
*/
#include <stdio.h>

struct Endereco {
    char rua[100];
    int numero;
    char cidade[100];
    char estado[100];
};
struct Pessoa {
    char nome[100];
    int idade;
    struct Endereco endereco;
};

void print(struct Pessoa x) {
    printf("Endereco do/a %s\n", x.nome);
    printf("Rua: %s\n", x.endereco.rua);
    printf("Numero: %d\n", x.endereco.numero);
    printf("Cidade: %s\n", x.endereco.cidade);
    printf("Estado: %s", x.endereco.estado);
}

void main() {
    struct Endereco endereco = {"Avenida Copacabana", 30, "Goiania", "GO"};
    struct Pessoa pessoa = {"Antonia", 70, endereco};
    print(pessoa);
}
