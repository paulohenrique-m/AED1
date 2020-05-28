#include <stdio.h>
#include <stdlib.h>

int main() {
  float kmi, kmf, cf, media;
  printf("coloque sua km inicial antes de abastecer:");
  scanf("%f", &kmi);
  printf("coloque sua km no final do percurso:");
  scanf("%f", &kmf);
  printf("quantos litros gastou na viagem?:");
  scanf("%f", &cf);
  media = (kmf - kmi) / cf;
  printf("a media de consumo do seu carro e de:%0.2f km/litros", media);

  return 0;
}
