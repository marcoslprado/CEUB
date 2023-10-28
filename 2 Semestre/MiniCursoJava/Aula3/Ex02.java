package aula3;

import java.util.Scanner;
public class ex02 {
	
	public static double A(double num1, double num2) {
		return num1 + num2;
	}
	
	public static double B(double num1, double num2) {
		return num1 * Math.pow(num2,2);
		
	}
	
	public static double C(double num1) {
		return Math.pow(num1,2);
	}
	
	public static double D(double num1) {
		if (num1 > 0) {
			return num1;
		} else {
			return -(num1);
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double num1, num2;
		System.out.println("Digite o primeiro numero: ");
		num1 = sc.nextInt();
		System.out.println("Digite o segundo numero: ");
		num2 = sc.nextInt();
		System.out.printf("a) Soma dos numeros: %.2f\n", A(num1,num2));
		System.out.printf("b) O produto do primeiro número pelo quadrado do segundo: %.2f\n", B(num1,num2));
		System.out.printf("c) O quadrado do primeiro número: %.2f\n", C(num1));
		System.out.printf("d) O módulo do primeiro número: %.2f", D(num1));
	}

}
