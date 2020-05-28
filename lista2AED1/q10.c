#include <stdlib.h>
#include <stdio.h>
int main()
{
	float a;
	printf("escreva um numero com parte fracionada:");
	scanf("%f", &a);
	printf("parte inteira %d e real %f", (int)a, (a - (int)a));
	//o que sobrar da subtra��o entre o numero e o inteiro dele
	//sera a sua parte fracionada!!

	return 0;
}
