#include <stdio.h>
#include <stdlib.h>
void printa_matriz(int matriz[][2]) {
  printf("a matriz guardada eh:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}
void recebe_matriz(int matriz_recebida[3][2]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("vetor[%d][%d]:", i + 1, j + 1);
      scanf("%d", &matriz_recebida[i][j]);
    }
  }
}
int main() {
  int contador = 0;
  int matriz[3][2] = {1, 2, 3, 4, 5, 6};
  int matriz_recebida[3][2];
  /*
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("vetor[%d][%d]:", i + 1, j + 1);
      scanf("%d", &matriz_recebida[i][j]);
    }
  }
  */
  recebe_matriz(matriz_recebida);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", matriz_recebida[i][j]);
      //usei um if para, caso umas das posições for igual adiciona no contador
      if (matriz_recebida[i][j] == matriz[i][j])
        contador++;
    }
    printf("\n");
  }
  printa_matriz(matriz);
  //se 6 locais foram iguais, as 2 matrizes são identicas!!
  if (contador == 6) {
    printf("as matrizes sao iguais!");
  } else {
    printf("as matrizes sao diferentes!");
  }

  return 0;
}
