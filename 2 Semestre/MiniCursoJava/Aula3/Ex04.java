package dever;
import java.util.Scanner;
public class Ex04 { /* Elabore uma função que receba três notas de um aluno como parâmetro
 e uma letra. Se a letra for ‘A’ / ‘a’, a função deve calcular a média aritmética das notas do aluno;
  se a letra for ‘P’ / ‘p’, deverá calcular a média ponderada, com pesos 5, 3 e 2, respectivament
 com as notas 1, 2, 3. Retorne a média calculada para o programa principal. */

	
	public static double medias(double nota1, double nota2, double nota3, char letra) {
		double media;
		if (letra == 'A') {
			media = (nota1 + nota2 + nota3) / 3;
		} else {
			media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
		}
		return media;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double nota1, nota2, nota3;
		char letra;
		System.out.println("Digite a nota 1: ");
		nota1 = sc.nextDouble();
		System.out.println("Digite a nota 2: ");
		nota2 = sc.nextDouble();
		System.out.println("Digite a nota 3: ");
		nota3 = sc.nextDouble();
		System.out.println("Digite <A> para media aritmetica e <P> para media ponderada: ");
		letra = sc.next().charAt(0);
		System.out.println("A media eh igual a: " + medias(nota1,nota2,nota3,letra));
	}

}
