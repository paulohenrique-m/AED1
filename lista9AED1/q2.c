#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int maxvetor(int vetor, int tamanho_vetor)
{
    int max = -1;

    if (max <= vetor[tamanho_vetor - 1])
    {
        max = vetor[tamanho_vetor - 1];
        --tamanho_vetor;
    }
    return maxvetor(vetor, --tamanho_vetor);
}
int minvetor()
{
}
int soma_elementos()
{
}
float produto_elementos()
{
}
float media_elementos()
{
}

int main()
{
    int vetor[5] = {5, 4, 3, 2, 1};
    printf("%d", maxvetor(vetor, 5));
    return 0;
}