package aula3;
import java.util.Locale;
import java.util.Scanner;
public class ex06 {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		StringBuilder resultado = new StringBuilder();
		System.out.println("Digite uma palavra: ");
		String input = sc.next();
		String minuscula = input.toLowerCase();
		char[] string = minuscula.toCharArray(); // Converte a String em um array de caracteres //
		for (int i = 0; i < string.length; i++) {
			if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' &&
					string[i] != 'u') {
				resultado.append(string[i]);
			}
		}
		System.out.println("Resultado: " + resultado.toString());
		sc.close();
		
	
	}

}
