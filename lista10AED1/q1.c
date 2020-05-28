#include <stdio.h>
#include <stdlib.h>
void copiaFunc(int recebeMatriz[][2], int matriz[][2]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      recebeMatriz[i][j] = matriz[i][j];
    }
  }
  /*
  descrição:procedimento para copiar a matriz principal para secundaria
  entrada:2 matrizes
  saida:não tem
  */
}
int main() {
  int recebeMatriz[3][2];
  int matriz[3][2] = {1, 2, 3, 4, 5, 6};
  copiaFunc(recebeMatriz, matriz);
  /*arrumei um procedimento para copiar e voltar como ponteiro pro algoritmo
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
      recebeMatriz[i][j] = matriz[i][j];
    }
  }*/
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d", recebeMatriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}