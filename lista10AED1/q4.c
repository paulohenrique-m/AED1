#include <stdio.h>
#include <stdlib.h>

int main() {
  int recebe_Matriz[3][2];
  int linha_maior = 0;
  int maior_valor;
  printf("---------matriz[3][2]---------\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("digite um numero para colocar em matriz[%d][%d]:", i + 1, j + 1);
      scanf("%d", &recebe_Matriz[i][j]);
      if (i == 0 && j == 0) {
        maior_valor = recebe_Matriz[i][j];
      }
      if (maior_valor < recebe_Matriz[i][j]) {
        linha_maior = i;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", recebe_Matriz[i][j]);
    }
    printf("\n");
  }
  printf("o maior numero foi encontrado na linha %d", linha_maior + 1);
  return 0;
}