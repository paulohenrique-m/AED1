#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int recebe_k(int vetor[], int k, int tamanho_vetor)
{
    if (vetor[tamanho_vetor - 1] == k || tamanho_vetor == 0)
        return tamanho_vetor - 1;
    return recebe_k(vetor, k, --tamanho_vetor /*vetor-1*/);
} //função recursiva que chama ela mesmo ate o numero chegar(se chegar) a posição desejada

int main()
{
    int vetor[5] = {5, 4, 3, 2, 1};
    int k;
    printf("o vetor eh vetor[5]={5,4,3,2,1}");
    printf("\nqual numero deseja:");
    scanf("%d", &k);
    printf("%d", recebe_k(vetor, k, 5));

    return 0;
}