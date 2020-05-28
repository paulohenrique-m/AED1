#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vetor[10];
	//int vetor[10]={10,9,8,7,6,5,4,3,2,1};
	int n = 9;

	printf("escreva 10 numeros para colocar em um vetor:");
	while (n >= 0)
	{
		scanf("%d", &vetor[n]);
		n--;
	}
	n = 0;
	while (n < 10)
	{
		printf("\nposicao %d:%d", n, vetor[n]);
		n++;
	}

	return 0;
	/*
	descrição:programa que lê 10 números informados pelo usuário e armazena em um vetor. Imprima os elementos em ordem reversa da leitura.
	entrada:10 numeros inteiros
	saida: vetor com os 10 numeros em ordem reversa
	*/
}
