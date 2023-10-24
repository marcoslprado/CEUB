package workspace;
import java.util.Scanner;

public class Ex04 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Digite a nota: ");
		double nota = sc.nextDouble();
		if (nota < 5) {
			System.out.println("Voce foi reprovado");
		} else {
			System.out.println("Voce foi aprovado");
		}
		sc.close();
	}

}
