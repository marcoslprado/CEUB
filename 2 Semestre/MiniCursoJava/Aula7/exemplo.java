package aula8;
import java.util.Scanner;
public class exemplo {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Digite a base do triangulo A: ");
		double baseA = sc.nextDouble();
		System.out.println("Digite a altura do triangulo A: ");
		double alturaA = sc.nextDouble();
		System.out.println("Digite a base do triangulo B: ");
		double baseB = sc.nextDouble();
		System.out.println("Digite a altura do triangulo B: ");
		double alturaB = sc.nextDouble();
		double areaA = baseA * alturaA / 2;
		double areaB = baseB * alturaB / 2;
		System.out.println("Area do triangulo A: " + areaA);
		System.out.println("Area do triangulo B: " + areaB);
		if (areaA > areaB) {
			System.out.println("Area maior: A");
		} else {
			System.out.println("Area maior: B");
		}

	}

}
