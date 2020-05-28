#include <stdio.h>
#include <stdlib.h>

int main() {
  float a1, a2, a3, at, l1, c1, l2, c2, l3, c3;
  printf("coloque o comprimento do primeiro comodo:");
  scanf("%f", &c1);
  printf("coloque a largura do primeiro comodo:");
  scanf("%f", &l1);
  printf("coloque o comprimento do segundo comodo:");
  scanf("%f", &c2);
  printf("coloque a largura do segundo comodo:");
  scanf("%f", &l2);
  printf("coloque o comprimento do terceiro comodo:");
  scanf("%f", &c3);
  printf("coloque a largura do terceiro comodo:");
  scanf("%f", &l3);
  a1 = c1 * l1;
  a2 = c2 * l2;
  a3 = c3 * l3;
  at = a1 + a2 + a3;
  printf(" area total do primeiro comodo:%0.2f\n area total do segundo comodo:%0.2f\n area total do terceiro comodo:%0.2f\n area total dos 3 comodos:%0.2f", a1, a2, a3, at);

  return 0;
}
