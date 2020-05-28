#include <stdio.h>
int main()
{

    int num = 10, soma = 0;

    do
    {
        soma += num;
        printf("%i\n", num--);
    } while (num > 0);

    printf("\nSoma total: %i", soma);

    return 0;
}
