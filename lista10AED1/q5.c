#include <stdio.h>
#include <stdlib.h>
/*
void ler_matriz(int matriz[][2]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("matriz[%d][%d]", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }
}
*/
void printa_matriz(int matriz[][2]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}
int main() {
  int matriz[3][2];
  int contador = 0, contador_media = 0;
  float media;
  printf("------------matriz[3][2]------------\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("matriz[%d][%d]", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
      contador += matriz[i][j];
    }
  }
  /*
  ler_matriz(matriz);
  */
  media = contador / 6.0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      if (matriz[i][j] > media)
        contador_media++;
    }
  }
  printa_matriz(matriz);
  if (contador > 0) {
    printf("a media foi %0.2f e existe(m) %d numero(s) maiores que ela", media, contador_media);
  } else {
    printf("não tem numeros maiores que a media");
  }
  return 0;
}