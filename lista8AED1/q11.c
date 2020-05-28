#include <stdio.h>
#include <stdlib.h>
//não entendi muito bem a leitura desta questão!
int main()
{
	int vetor[10];
	int n = 0;
	while (n < 10)
	{
		printf("vetor[%d]=", n);
		scanf("%d", &vetor[n]);
		if (vetor[n] >= 0 && vetor[n] <= 9)
		{
			//printf("vetor[%d]=%d\n",n,vetor[n]);
		}
		else
		{
			printf("\nnumero invalido!\ntente novamente\n");
			n = -1;
		}
		n++;
	}
	n = 9;
	while (n > 0)
	{
		printf("\nvetor[%d]=%d", n, vetor[n]);
		n--;
	}

	/*
	descri��o:algoritmo que leia N números entre 0 e 9 informados pelo usuário e depois armazene em cada posição i de um vetor de 10 posições o número de vez que o número i apareceu.
	entrada: n numeros inteiros
	saida:posições do vetor
	*/

	return 0;
}
