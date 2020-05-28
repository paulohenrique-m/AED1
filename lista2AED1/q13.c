#include <stdlib.h>
#include <stdio.h>
int main()
{
	int parafuso, pag;
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
	printf("\ncomo deseja pagar?\n1-dinhero\n2-debito\n3-credito\n4-boleto\n");
	scanf("%d", &pag);
	switch (pag)
	{
	case 1:
		printf("opcao dinheiro(5%%):%0.2f", valor * 0.95);
		break;
	case 2:
		printf("opcao debito(3%%):%0.2f", valor * 0.97);
		break;
	case 3:
		printf("opcao credito(sem desconto adcional!):%0.2f", valor);
		break;
	case 4:
		printf("opcao boleto(2%%):%0.2f", valor * 0.98);
		break;
	}
	return 0;
}
