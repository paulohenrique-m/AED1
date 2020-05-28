#include <stdlib.h>
#include <stdio.h>
int main()
{
    int aux = 1;
    char a1[30];
    char a2[30];
    printf("escreva 2 palavras\n");
    printf("palavra numero %d", aux);
    scanf("%s", &a1);
    printf("palavra numero %d", aux + 1);
    scanf("%s", &a2);
    if (a1 == a2)
    {
        printf("palavras iguais!");
    }
    else
    {
        printf("palavras diferentes!");
    }
    return 0;
}