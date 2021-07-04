#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	// Exercicio
	// Primeiro declare todas as valiaveis variavel 
	int x;
	int y;
	int res;
	printf("Digite um o primeiro valor:\n"); // Sintace de input
	scanf_s("%i", &x);

	printf("Digite um o segundo valor:\n");
	scanf_s("%i", &y);

	res = x + y;

	printf("A soma de %i mais %i é iqual a %i", x, y, res); //print
	
	// IF e ELSE
	int n1 = 1;
	int n2 = 2;

	if (n1 > n2) {
		printf("%i é maior que %i", n1, n2);
	}
	else {
		printf("%i é menor que %i", n1, n2);
	}

	// Switch case



	return 0;
}