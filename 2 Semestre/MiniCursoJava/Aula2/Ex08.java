package workspace;
import java.util.Scanner;
public class Ex08 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Digite a coordenada x do ponto: ");
		double x = sc.nextDouble();
		System.out.println("Digite a coordenada y do ponto: ");
		double y = sc.nextDouble();
		if (x == 0 && y == 0) {
			System.out.println("Origem");
		}else if (x > 0 && y > 0) {
			System.out.println("Q1");
		} else if (x < 0 && y > 0) {
			System.out.println("Q2");
		} else if (x < 0 && y < 0) {
			System.out.println("Q3");
		} else {
			System.out.println("Q4");
		}
		sc.close();

	}

}
