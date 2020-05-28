#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vetor[10];
	int n = 0;
	while (n < 10)
	{

		if (n % 2 == 0)
		{ //se for par, coloca 1 no vetor e mostra
			vetor[n] = 1;
			printf("posicao %d=1\n", n);
		}
		else
		{ //se for impar, coloca 0 no vetor e mostra

			vetor[n] = 0;
			printf("posicao %d=0\n", n);
		}
		n++;
	}

	/*
	descri��o:algoritmo que preenche e imprime um vetor de tamanho 10 usando a seguinte regra: - Se a posição do vetor é múltipla de 2, deve-se armazenar 1. Caso contrário, armazene 0.
	entrada:não tem
	saida:10 numeros inteiros
	*/

	return 0;
}
