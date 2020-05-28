#include <stdio.h>
#include <stdlib.h>

int multiplica(A, B)
{
    int z = A;

    if (B == 0 || A == 0)
        return 0;
    else if (B == 1)
        return A;
    else
        z += multiplica(A, B - 1);

    return z;
    /*
	descrição:função recursiva que retorne o resultado da multiplicação dos dois parâmetros utilizando apenas o operador somas
	entrada: 2 numeros inteiros
	saida: resultado da multiplicação em inteiro
	*/
}

int main()
{
    int A, B;
    printf("Informe um multiplicando: ");
    scanf("%d", &A);
    printf("Informe um multiplicador: ");
    scanf("%d", &B);

    printf("A * B = %d", multiplica(A, B));
    return 0;
}