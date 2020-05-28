#include <stdio.h>
#include <stdlib.h>

int quantos_Digitos(int A)
{
    int z = 1;

    if (A == 0)
        return 0;
    else if (A < 10)
        return 1;
    else
        z += quantos_Digitos(A / 10);

    return z;
    /*
	descrição:recebe um numero inteiro e retorna a quantidade de digitos
	entrada: 1 numero inteiro
	saida: quantidade de digitos na entrada como inteiro
	*/
}

int main()
{
    int A;

    printf("Informe um numero: ");
    scanf("%d", &A);
    printf("O numero informado possui %d digitos.", quantos_Digitos(A));
    return 0;
}