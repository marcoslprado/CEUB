package aula05;
import java.util.Scanner;
import java.io.IOException;
public class ex02 {

	public static void clearScreen() {
	    try {
	        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
	    } catch (IOException | InterruptedException e) {
	        e.printStackTrace();
	    }
	}

	public static void main(String[] args) throws InterruptedException {
		Scanner sc = new Scanner(System.in);
		int choice = 0, alcool = 0, gasolina = 0, diesel = 0;
		while (choice != 4) {
			System.out.println("1. Álcool");
			System.out.println("2. Gasolina");
			System.out.println("3. Diesel");
			System.out.println("4. Fim");
			System.out.println("Digite o tipo de combustível abastecido: ");
			choice = sc.nextInt();
			if (choice == 1) {
				alcool++;
			} else if (choice == 2) {
				gasolina++;
			} else if (choice == 3) {
				diesel++;
			} else if (choice != 4) {
				System.out.println("Numero invalido");
				Thread.sleep(2000);
			}
			clearScreen();
		}
		System.out.println("MUITO OBRIGADO");
		System.out.println("Álcool: " + alcool + " clientes");
		System.out.println("Gasolina: " + gasolina + " clientes");
		System.out.println("Diesel: " + diesel + " clientes");

	}

}
