#include <stdlib.h>
#include <stdio.h>
int main()
{
	float peso, altura, imc;
	printf("informe altura e peso:");
	scanf("%f%f", &altura, &peso);
	imc = peso / (altura * altura);
	printf("seu imc=%0.2f\n", imc);
	if (imc < 18.5)
		printf("abaixo do peso!");
	else if (imc >= 18.6 && imc <= 24.9)
		printf("peso ideal!");
	else if (imc >= 25 && imc <= 29.9)
		printf("levemente acima do peso");
	else if (imc >= 30 && imc <= 34.9)
		printf("obesidade grau 1");
	else if (imc >= 35 && imc <= 39.9)
		printf("obesidade grau 2");
	else
		printf("obesidade morbida");

	return 0;
}
