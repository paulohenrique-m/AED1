#include <stdio.h>
#include <stdlib.h>
int main() {
  int meses;
  float vi, tjm, valortotal, jrendidos, jacumulado, jmes;
  printf("coloque um valor a ser investido:");
  scanf("%f", &vi);
  printf("informe a taxa de juros mensal:");
  scanf("%f", &tjm);
  printf("quantos meses ira durar a aplica�ao?:");
  scanf("%d", &meses);
  valortotal = (vi * (tjm / 100)) * meses + vi;
  printf("o valor arecadado em %d meses foi de:%0.4f", meses, valortotal);
  jacumulado = (vi * (tjm / 100)) * meses;
  jmes = vi * (tjm / 100);
  printf("\npor mes foi ganho %0.2f e no final de %d meses,foi adquirido:%0.2f", jmes, meses, jacumulado);

  return 0;
}
