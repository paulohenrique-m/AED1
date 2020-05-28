#include <stdio.h>
#include <stdlib.h>
//f(x)= 3x^3+2x^2+x-5
int main()
{
    int x = 0, RESULTADO = 1;
    int vetor[5];
    //RESULTADO = 3 * (pow(x, 3)) + 2 * (pow(x, 2)) + x - 5; fiz isso pra testar se tava dando a formula
    //printf("3x^3+2x^2+x-5 quando x eh 2=%d", RESULTADO);
    while (x <= 5)
    {
        RESULTADO = 3 * (pow(x, 3)) + 2 * (pow(x, 2)) + x - 5;
        vetor[x] = RESULTADO;
        printf("\n3x^3+2x^2+x-5 quando x eh %d=%d", x, vetor[x]);
        x++;
    }
    return 0;
    /*
	descrição:) Construa um algoritmo que preenche um vetor com o resultado da função f(x) = 3x³ + 2x² +1x -5, onde X é o índice da posição do vetor.
	entrada:não tem
	saida: vetor com a regra
	*/
}
