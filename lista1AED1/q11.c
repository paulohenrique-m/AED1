#include <stdio.h>
#include <stdlib.h>

int main() {
  float c, f;
  printf("coloque a temperatura atual em celsius:");
  scanf("%f", &c);
  f = (c * 1.8) + 32;  //formula geral
  printf("\n\na temperatura em fahrenheit e:%0.2f", f);

  return 0;
}
