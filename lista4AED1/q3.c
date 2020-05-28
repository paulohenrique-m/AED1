#include <stdio.h>

int main()
{

  int i, num, count = 0, posicao;
  printf("\nDigite um numero inteiro positivo: ");
  scanf("%i", &i);
  num = i;

  if (i < 0)
  {
    printf("Valor invalido");
    return 0;
  }

  while (i >= 1 || i <= -1)
  {
    i = i / 10;
    count++;
  }

  printf("\nDigite uma posicao de 1 ate %i: ", count);
  scanf("%i", &posicao);

  if (posicao > 0 && posicao <= count)
  {

    while (count > 0)
    {

    
      if (count == posicao)
      {
        printf("O digito na posicao %i e: %i", posicao, num % 10);
        count = 0;
      }
      else
      {
        num = num / 10;
        count--;
      }
    }

  }
  else
  {
    printf("\nValor invalido!");
  }

  return 0;
}
