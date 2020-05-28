#include <stdio.h>
#include <stdlib.h>
void printa_matriz(int matriz[3][2]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}
void transposta(int matriz[3][2]) {
  printf("-----------matriz transposta-----------\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[j][i]);
    }
    printf("\n");
  }
}
int main() {
  int matriz[3][2] = {1, 2, 3, 4, 5, 6};
  /*
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  */
  /*
  printf("-----------matriz transposta-----------\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", matriz[j][i]);
    }
    */
  printa_matriz(matriz);
  transposta(matriz);

  return 0;
}