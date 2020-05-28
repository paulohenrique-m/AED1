#include <stdio.h>
int main()
{

    int a = 0;

    while (a != -1)
    {
        if (a % 3 == 2 && a % 5 == 3 && a % 7 == 4)
        {
            printf("Numero que atende as condicoes e: %i", a);
            a = -2;
        }

        a++;
    }

    return 0;
}
