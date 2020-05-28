#include <stdio.h>
#include <stdlib.h>

int diferenca(int matriz[3][3]) {
  int j, acima = matriz[0][1], abaixo = matriz[1][0];
  for (int i = 0; i < 3; i++)
    for (j = 0; j < 3; j++) {
      if (i > j && acima < matriz[i][j]) {
        acima = matriz[i][j];
      } else if (i < j && abaixo < matriz[i][j]) {
        abaixo += matriz[i][j];
      }
    }
  return acima - abaixo;
}

int main() {
  int matriz[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("matriz[%d][%d]", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n\nA diferenca eh %i\n\n", diferenca(matriz));
  return 0;
}