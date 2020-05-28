#include <stdlib.h>
#include <stdio.h>
int main()
{
	int parafuso;
	float valor;
	printf("descontos:\nentre 101 e 200-10%%\nentre201 e 300-20%%\nentre 301 e 400-30%%\nacima de 401-40%%");
	printf("\nquantos parafusos quer comprar?(valor unitario de RS0,5)\n");
	scanf("%d", &parafuso);
	if (parafuso < 101)
		printf("o valor e de %0.2f", parafuso * 0.5);
	else if (parafuso >= 101 && parafuso <= 200)
	{
		valor = parafuso * 0.5 - ((parafuso * 0.5) * 0.1);
		printf("o valor e de %0.2f", valor);
	}
	else if (parafuso >= 201 && parafuso <= 300)
	{
		valor = (parafuso * 0.5) - ((parafuso * 0.5) * 0.2);
		printf("o valor e de %0.2f", valor);
	}
	else if (parafuso >= 301 && parafuso <= 400)
	{
		valor = parafuso * 0.5 - ((parafuso * 0.5) * 0.3);
		printf("o valor e de %0.2f", valor);
	}
	else if (parafuso > 401)
	{
		valor = (parafuso * 0.5) - ((parafuso * 0.5) * 0.4);
		printf("o valor e de %0.2f", valor);
	}
	return 0;
}
