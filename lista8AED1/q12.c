#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a = 0, b = 1, auxiliar;
    double vetor[100];
    printf("Série de Fibonacci em vetor:\n");

    for (int i = 0; i < 100; i++)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        vetor[i] = auxiliar;
        printf("vetor[%d]=%f\n", i, vetor[i]);
    }
    return 0;
    /*
	descrição:algoritmo que preenche um vetor com os primeiros 100 elementos da série de Fibonacci
	entrada:não tem
	saida: 100 numeros inteiros
	*/
}
