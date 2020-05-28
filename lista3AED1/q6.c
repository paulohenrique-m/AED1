#include <stdio.h>
int main()
{

    int num = 9, i = 0;
    for (i = 0; i <= 100; i++)
    //enquanto i for 0 e menor ou igual a 100, continuar somando
    {
        printf("%i x %i = %i\n", num, i, num * i);
    }

    return 0;
}
