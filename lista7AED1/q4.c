#include <stdio.h>

int maior_numeroN(int n)
{
  int i = n;
  while (i > 0)
  {
    if (ehPrimo(i))
    {
      return i;
    }
    i--;
  }
  return -1;
  
/*
Descri��o: recebe um inteiro e retorna o maior numero primo ate ele
Entradas: um inteiro
Sa�da: maior numero primo ate n. caso nao exista retorna -1
*/
}

int ehPrimo(int n)
{
  int i = n - 1;
  while (i > 1)
  {
    if (n % i == 0)
    {
      return 0;
    }
    i--;
  }
  return 1;
/*
Descri��o: fun��o para receber um inteiro e verificar se � primo ou n�o
Entradas: um inteiro
Sa�da: 0 caso n�mero n�o primo, 1 caso n�mero primo
*/
}

int main()
{
  
  int n;
  printf("\nDigite um valor n: ");
  scanf("%i", &n);

  if (n > 0)//verificar valor valido
  {
    printf("\nO maior numero primo ate n eh: %i", maior_numeroN(n));
  }
  else
  {
    printf("\nValor invalido!");
  }

  return 0;
}
