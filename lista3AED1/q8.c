#include <stdio.h>

int main()
{

    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    for (int a = 1; a <= num; a++)
    {
        for (int aux = 1; aux <= a; aux++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
