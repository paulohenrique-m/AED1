#include <stdio.h>
#include <stdlib.h>

int soma_Digitos(int A)
{
    int z = 0;

    if (A < 10)
        return A;
    else
    {
        z = A % 10;
        z += soma_Digitos(A / 10);
    }
    return z;
    /*
	descrição:função recursiva  pra retornar a soma dos digitos recebida pela main
	entrada:numeros inteiros
	saida: soma dos numeros
	*/
}

int main()
{
    int A;

    printf("Informe um numero: ");
    scanf("%d", &A);
    printf("A soma dos digitos do numero eh %d.", soma_Digitos(A));
    return 0;
}