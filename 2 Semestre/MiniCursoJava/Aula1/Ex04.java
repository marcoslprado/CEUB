package Exercicio04;
import java.util.Scanner;

public class Ex04 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double A, B, C;
		System.out.println("Digite o valor de A: ");
		A = sc.nextDouble();
		System.out.println("Digite o valor de B: ");
		B = sc.nextDouble();
		System.out.println("Digite o valor de C: ");
		C = sc.nextDouble();
		System.out.println("A área do triângulo retângulo que tem A por base e C por altura eh: " + A*C/2);
		System.out.println("A área do círculo de raio C. (pi = 3.14159) eh: " + 3.14159 * Math.pow(C,  2));
		System.out.println("A área do trapézio que tem A e B por bases e C por altura h: " + (A+B) * C/2);
		System.out.println("A área do quadrado que tem lado B e: " + Math.pow(B, 2));
		System.out.println("a área do retângulo que tem lados A e B eh: " + A*B);
	}

}
