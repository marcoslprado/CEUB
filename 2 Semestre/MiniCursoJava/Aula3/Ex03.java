package dever;
import java.util.Locale;
import java.util.Scanner;
public class Ex03 {

	public static double media(int num, Scanner sc) {
		double mediaA = 0;
		int i = 0;
		for (i = 0; i < num; i++) {
			System.out.printf("Digite o numero %d: ", i+1);
			mediaA += sc.nextDouble();
		}
		return mediaA/num;
	}
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		int num;
		System.out.println("Digite a quantidade de numeros que deseja inserir: ");
		num = sc.nextInt();
		System.out.printf("A media aritmetica desses numeros eh igual a: %.1f", media(num, sc));

	}

}
