package workspace;
import java.util.Scanner;
public class Ex07 { /* Escreva um algoritmo que solicita ao usuário dois operandos e um código de operação 
(1 - Soma, 2 - Subtração, 3 - Divisão ou 4 - Multiplicação) e realiza a operação correspondente sobre os operandos fornecidos pelo usuário:*/


	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.printf("----------CALCULADORA----------\n");
		System.out.printf("1. Soma\n");
		System.out.printf("2. Subtracao\n");
		System.out.printf("3. Divisao\n");
		System.out.printf("4. Multiplicacao\n");
		System.out.print("Escolha uma opcao: ");
		int opcao = sc.nextInt();
		System.out.println("Digite o primeiro numero: ");
		double numero1 = sc.nextDouble();
		System.out.println("Digite o segundo numero: ");
		double numero2 = sc.nextDouble();
		switch (opcao) {
		case 1:
			System.out.printf("Resultado = %.2f", numero1 + numero2);
			break;
		case 2:
			System.out.printf("Resultado = %.2f", numero1 - numero2);
			break;
		case 3:
			System.out.printf("Resultado = %.2f", numero1 / numero2);
			break;
		case 4: 
			System.out.printf("Resultado = %.2f", numero1 * numero2);
		}
		sc.close();
	}

}
