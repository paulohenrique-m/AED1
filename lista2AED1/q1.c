#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	printf("escreva um numero inteiro positivo: ");
	scanf("%d", &num);
	if (num <= 0)
		printf("o numero precisa ser positivo!");
	else if (num % 2 == 0)
		//se o numero for divisivel por 2 e der resto 0 ent�o � par
		//sen�o � impar
		printf("seu numero e par!");
	else
		printf("seu numero e impar!");

	return 0;
}
