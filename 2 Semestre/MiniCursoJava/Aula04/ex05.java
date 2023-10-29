package aula4;
import java.util.Scanner;
public class ex05 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num;
		System.out.println("Digite um numero inteiro: ");
		num = sc.nextInt();
		for (double i = 1; i <= num; i++) {
			System.out.printf("%.0f\t",i);
			System.out.printf("%.0f\t", Math.pow(i, 2));
			System.out.printf("%.0f\n",Math.pow(i, 3));
		}
	}

}
