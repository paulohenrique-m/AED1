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
int main() {
  int matriz[3][2] = {1, 2, 3, 4, 5, 6};
  int coluna;
  int soma = 0;
  printa_matriz(matriz);
  printf("\nqual coluna deseja mostrar?");
  scanf("%d", &coluna);
  coluna -= 1;
  for (int i = 0; i < 3; i++) {
    for (int j = coluna; j <= coluna; j++) {
      printf("%d", matriz[i][j]);
      soma += matriz[i][j];
    }
    printf("\n");
  }
  printf("\na soma dos valores da coluna eh= %d", soma);
  return 0;
}