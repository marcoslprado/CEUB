package aula6;
import java.util.Scanner;
public class ex01 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int tamanho, num, qtd = 0;
		System.out.println("Digite o tamanho da matriz: ");
		tamanho = sc.nextInt();
		int [][] matriz = new int [tamanho][tamanho];
		for (int i = 0; i < tamanho; i++) {
			for (int j = 0; j < tamanho; j++) {
				System.out.printf("Insira o valor [%d][%d]", i, j);
				num = sc.nextInt();
				matriz[i][j] = num;
				if (num < 0) {
					qtd++;
				}
			}
		}
		System.out.println("Quantidade de numeros negativos: " + qtd);
		System.out.println("Diagonal principal: ");
		for (int i = 0; i < tamanho; i++) {
			for (int j = 0; j < tamanho; j++) {
				if (i == j) {
					System.out.printf("%d\t", matriz[i][j]);
				}
			}
		}
	}

}
