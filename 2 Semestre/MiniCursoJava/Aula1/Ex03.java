package aula_de_java;
import java.util.Scanner;

public class Exercicio3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int numeroFuncionario;
		int horas;
		double valor;
		double salario;
		System.out.print("Digite o numero do funcionario: ");
		numeroFuncionario = sc.nextInt();
		System.out.print("Digite o numero de horas trabalhadas por ele: ");
		horas = sc.nextInt();
		System.out.print("Digite o valor por hora que o funcionario deve receber: ");
		valor = sc.nextDouble();
		salario = valor * horas;
		System.out.printf("O funcionario %d devera receber %.2f de salario", numeroFuncionario, salario);
	}

}
