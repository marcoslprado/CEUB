// Programa que imprime os 20 primeiros numeros primos //
#include <stdio.h>

int main() {
	int i; // Variavel que eu vou verificar se e primo //
	int teste = 2; // Variavel que uso para dividir i e ver se o numero e primo //
	int controle = 0; // Variavel que limita o numero de primos que eu quero //
	for (i = 2; i <=100; i++) { 
		while (teste <= i) {
			if (controle == 20) { // Verifica se eu ja atingi o numero de primos que eu quero e para de rodar o while quando isso acontece //
				break;
			}
			if (i % teste == 0){ // Se i for for divisivel por teste: //
				if (teste == i) { // verifico se teste é igual a i. Se for e primo, visto que se nao for vai entrar no else la embaixo e ja vai dar break no while //
					printf("%d\n", i);
					controle += 1; // Quando e primo aumento em um a variavel de controle de numeros primos //
					if (controle == 20) {
						break;
					}
					break;
				} else{
					break;
				}
			}
			teste+=1;
		}
		teste = 2; // Seta o teste para 2 de novo para testar com o proximo numero i //
	}
}
