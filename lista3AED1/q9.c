#include <stdio.h>

int main()
{

    int num, i, aux, sum = 1;

    printf("Digite um numero: ");
    scanf("%i", &num);

    for (i = 1; i <= num; i++)
    {

        for (aux = 1; aux <= i; aux++)
        {
            printf("%i ", sum++);
        }

        printf("\n");
    }

    return 0;
}
