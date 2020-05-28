#include <stdio.h>
#include <stdlib.h> //rand() e srand()
#include <time.h>   //pegar tempo atual

int main()
{

    int soma = 0, num;
    float media;

    printf("\nGerando 10 valores aleatorios entre 0 e 100: ");
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        // ao dividir um numero por 101 e pegar seu resto, o maior resto possivel � 100
        num = rand() % 101;
        soma += num;
        printf("%d ", num);
    }

    printf("\nSoma: %i", soma);
    printf("\nMedia: %0.2f\n", soma / 10.0);
    return 0;
}
