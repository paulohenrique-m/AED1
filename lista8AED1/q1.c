#include <stdio.h>
#include <stdlib.h>

int divide(int x, int y)
{
    int z = 1;

    if (x < 0)
        x = -x;
    if (y < 0)
        y = -y;

    if (y == 0 || x < y)
        return 0;
    else if (x - y > 0)
        z += divide(x - y, y);

    return z;
    /*
	descri��o: função para dividir (a,b) apenas com subtração
	entrada:2 numeros inteiros
	saida:resultado inteiro
	*/
}

int main()
{
    int A, B;
    printf("Informe um dividendo: ");
    scanf("%d", &A);
    printf("Informe um divisior: ");
    scanf("%d", &B);

    printf("A / B = %d", divide(A, B));
    return 0;
}