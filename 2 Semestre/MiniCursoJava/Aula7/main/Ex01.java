package main;
import entities.Rectangle;
import java.util.Scanner;
public class Ex01 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Rectangle x = new Rectangle();
		System.out.println("Digite a base do retangulo: ");
		x.width = sc.nextDouble();
		System.out.println("Digite a altura do retangulo: ");
		x.height = sc.nextDouble();
		System.out.println("Area = " + x.Area());
		System.out.println("Perimetro = " + x.Perimeter());
		System.out.println("Diagonal = " + x.Diagonal());

	}

}
