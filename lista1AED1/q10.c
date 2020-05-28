#include <stdio.h>
#include <stdlib.h>
int main() {
  float p, h, imc;
  printf("informe seu peso atual:");
  scanf("%f", &p);
  printf("informe sua altura:");
  scanf("%f", &h);
  imc = p / pow(h, 2);
  printf("seu IMC:%f", imc);
  if (imc <= 18.5)
    printf("\nvoce esta na classificacao de magreza");
  else if (imc <= 24.8)
    printf("\nvoce esta no peso normal");
  else if (imc < 30)
    printf("\nvoce esta na classificacao de sobrepeso");
  else if (imc >= 30)
    printf("\nvoce esta na classificacao de obesidade");

  return 0;
}
