#include <stdio.h>
int main()
{

    int num = 10, soma = 0;

    while (num > 0)
    {
        soma += num;
        printf("%i\n", num--);
    }

    printf("\nSoma total: %i", soma);

    return 0;
}
