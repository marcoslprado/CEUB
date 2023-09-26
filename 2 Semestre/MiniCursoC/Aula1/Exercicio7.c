// Exercicio 7 -> Receba (input) o valor de um salário e mostre o quanto deve ser depositado de FGTS (8% do valor salário) para este salário informado. //

void main() {
    float x = 0;
    printf("Digite o valor do salario: ");
    scanf("%f", &x);
    x = 0.08 * x;
    printf("O valor a ser depositado de FGTS e: %.2f", x);

}
