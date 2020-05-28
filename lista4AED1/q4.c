#include <stdio.h>
#include <math.h>

int main()
{
  int numerador = 1;
  float soma = 0, denominador = 225;

  while (denominador >= 1)
  {
    soma += numerador / denominador;
    printf("%i / %0.0f = %f\n", numerador, denominador, numerador / denominador); 
    numerador += numerador;
    denominador = pow(sqrt(denominador) - 1.0, 2.0);
  }

  printf("%0.2f", soma);

  return 0;
}
