package aula_de_java;

public class Javex {

	public static void main(String[] args) {
		double computer = 2100.0;
		double officeDesk = 650.50;
		int registro = 30;
		int code = 5290;
		char gender = 'F';
		double measure = 53.23456700;
		System.out.printf("Produtos:\n Computador, cujo preco eh R$%.2f\n Mesa de escritorio, cujo preco eh R$%.2f\n Registro: %d anos, codigo %d e genero %c\n Medida com oito casas decimais: %.8f\n Cercado(tres casas decimais): %.3f", computer, officeDesk, registro, code, gender, measure, measure);;
	}

}
