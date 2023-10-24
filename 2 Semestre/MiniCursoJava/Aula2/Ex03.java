package workspace;
import java.util.Scanner;
public class Ex03 {

	public static void main(String[] args) {
		int x;
		Scanner sc = new Scanner(System.in);
		System.out.print("Digite um numero inteiro: ");
		x = sc.nextInt();
		if (x % 2 == 0) {
			System.out.println("O numero eh par");
		} else {
			System.out.println("O numero eh impar");
		}
		

	}

}
