#include <stdio.h>
#include <stdlib.h>

int progressao(int a, int r, int n)
{

    int z = a * pow(r, n - 1);
    printf("\nN = %d Z = %d", n, z);

    if (n == 1)
        return z;
    else
        z *= progressao(a, r, n - 1);
    /*
	descrição:função recursiva que calcule o n-ésimo termo de uma progressão geométrica onde o primeiro termo e a razão são informados pelo usuário. 
	entrada:numeros inteiros
	saida: numeros inteiros
	*/
}

int main()
{
    int primeiro, r, n;

    printf("Informe o primeiro termo da progressao: ");
    scanf("%d", &primeiro);
    printf("Informe a razao: ");
    scanf("%d", &r);
    printf("Informe o n-esimo termo desejado: ");
    scanf("%d", &n);

    progressao(primeiro, r, n);
    return 0;
}