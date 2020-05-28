#include <stdio.h>
#include <stdlib.h>

int somarElementos(int matriz[3][3]) {
  int somaElem = 0;
  for (int i = 0; i < 3; i++)
    for (int j = i + 1; j < 3; j++)
      somaElem += matriz[i][j];
  return somaElem;
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
  printf("\n\nA soma dos elementos acima da diagonal da matriz é %i\n\n", somarElementos(matriz));
}