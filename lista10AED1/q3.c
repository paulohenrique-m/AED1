#include <stdio.h>
#include <stdlib.h>
void printa_matriz(int matriz[][2]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
} /*
int verifica_k(int k) {
  //preciso fazer ainda!!!!!!!!!
  return result;
}*/
int main() {
  //linhas/colunas
  int k = 0, contador = 0;
  int matriz[3][2] = {2, 2, 3, 4, 2, 6};
  /*
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      printf("%d", matriz[i][j]);
    }
    printf("\n");
  }
  */
  printf("digite um numero que queria ser encontrado na matriz(de 0 a 9)");
  scanf("%d", &k);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      if (matriz[i][j] == k) {
        contador++;
      }
    }
  }
  printf("a matriz principal eh:\n");
  printa_matriz(matriz);
  printf("\no numero digitado foi %d e eh encontrado %d vezes", k, contador);
  return 0;
}