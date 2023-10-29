package aula05;
import java.util.Scanner;
import java.util.Locale;
public class a5_ex05 {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		double celsius, fahrenheit;
		char choice = 's';
		while (choice == 's') {
			System.out.println("Digite uma temperatura em Celsius: ");
			celsius = sc.nextDouble();
			fahrenheit = 9*celsius/5 + 32;
			System.out.println("A temperatura equivalente em Fahrenheit é: " + fahrenheit);
			System.out.println("Deseja converter outra temperatura? (s/n)");
			choice = sc.next().charAt(0);
		}
	}
}
