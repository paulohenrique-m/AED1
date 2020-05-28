#include <stdio.h>
#include <stdlib.h>

int main() {
  float sa, sf, r;
  printf("coloque seu salario atual:");
  scanf("%f", &sa);
  printf("coloque o reajuste salarial(nao use virgula e sim ponto):");
  scanf("%f", &r);
  sf = sa * (r / 100) + sa;  //calculo de reajuste
  printf("seu novo salario atual sera de:%0.2f", sf);

  return 0;
}
