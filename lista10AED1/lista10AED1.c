#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void copiaFunc(int recebeMatriz[][2], int matriz[][2]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      recebeMatriz[i][j] = matriz[i][j];
    }
  }
  /*
  descrição:procedimento para receber matriz e uma copia
  entrada:2 matrizes
  saida:não tem
  */
}
void printa_matriz(int matriz[][2]) {
  printf("a matriz guardada eh:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  /*
  descrição:procedimento para printar matriz 
  entrada:1 matriz inteira
  saida:printa matriz recebida
  */
}
void recebe_matriz(int matriz_recebida[3][2]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("vetor[%d][%d]:", i + 1, j + 1);
      scanf("%d", &matriz_recebida[i][j]);
    }
  }
  /*
  descrição:procedimento para escanear uma matriz inteira
  entrada:1 matriz inteira[3][2]
  saida:printa a posição do vetor a ser colocado o valor
  */
}
int somarElementos(int matriz1[3][3]) {
  int somaElem = 0;
  for (int i = 0; i < 3; i++)
    for (int j = i + 1; j < 3; j++)
      somaElem += matriz1[i][j];
  return somaElem;
  /*
  descrição:função para somar elementos de uma matriz inteira
  entrada:1 matriz inteira
  saida:soma de elementos
  */
}
int diferenca(int matriz1[3][3]) {
  int j, acima = matriz1[0][1], abaixo = matriz1[1][0];
  for (int i = 0; i < 3; i++)
    for (j = 0; j < 3; j++) {
      if (i > j && acima < matriz1[i][j]) {
        acima = matriz1[i][j];
      } else if (i < j && abaixo < matriz1[i][j]) {
        abaixo += matriz1[i][j];
      }
    }
  return acima - abaixo;
  /*
  descrição:função para fazer a diferença entre o maior(diagonal cima e baixo) numero 
  entrada:1 matriz inteira
  saida:retonar a subtração desses numeros
  */
}
void transposta(int matriz[3][2]) {
  printf("-----------matriz transposta-----------\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[j][i]);
    }
    printf("\n");
  }
  /*
  descrição:procedimento para transpor uma matriz
  entrada:1 matriz[3][2] inteira
  saida:matriz[2][3] inteira
  */
}

int main() {
  int opc = -1;
  int matriz[3][2] = {1, 2, 3, 4, 5, 6};
  int matriz1[3][3];
  int recebe_Matriz[3][2];    //q1
  int matriz_recebida[3][2];  //q2
  int contador = 0;           //q2,q3
  int k = 0;                  //q3
  int linha_maior = 0;        //q4
  int maior_valor;            //q4
  int contador_media = 0;     //q5
  float media;                //q5
  int coluna;                 //q8
  int soma = 0;               //q8

  while (opc != 0) {
    printf("\n------------MENU------------\n");
    printf("1-copiar conteudo de x para y\n");
    printf("2-verificar se a matriz é igual\n");
    printf("3-digitar um numero para ver quantas vezes eh mostrado\n");
    printf("4-linha do maior numero na matriz\n");
    printf("5-valor medio e numeros maiores\n");
    printf("6-valor acima da diagonal principal\n");
    printf("7-diferença entre o maior valor(diagonal de cima e debaixo)\n");
    printf("8-soma dos valores de uma coluna\n");
    printf("9-matriz transposta\n");
    printf("0-SAIR\n");
    printf("qual opcao deseja?:");
    scanf("%d", &opc);

    switch (opc) {
      case 0:
        printf("SAINDO...");
        break;
      case 1:
        printa_matriz(matriz);
        printf("\n---matriz copiada---\n");
        copiaFunc(recebe_Matriz, matriz);
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 2; j++) {
            printf("%d", recebe_Matriz[i][j]);
          }
          printf("\n");
        }
        printf("\n---------------------------\n");
        break;
      case 2:
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

        break;
      case 3:
        printf("digite um numero que queria ser encontrado na matriz(de 0 a 9)");
        scanf("%d", &k);
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 2; j++) {
            if (matriz[i][j] == k) {
              contador++;
            }
          }
        }
        printa_matriz(matriz);
        printf("\no numero digitado foi %d e eh encontrado %d vezes", k, contador);
        break;
      case 4:
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
        break;
      case 5:
        printf("------------matriz[3][2]------------\n");
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 2; j++) {
            printf("matriz[%d][%d]", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            contador += matriz[i][j];
          }
        }
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

        break;
      case 6:
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d]", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
          }
        }
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            printf("%d ", matriz1[i][j]);
          }
          printf("\n");
        }
        printf("\n\nA soma dos elementos acima da diagonal da matriz eh %i\n\n", somarElementos(matriz1));
        break;
      case 7:
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            printf("matriz1[%d][%d]", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
          }
        }
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            printf("%d ", matriz1[i][j]);
          }
          printf("\n");
        }
        printf("\n\nA diferenca eh %i\n\n", diferenca(matriz1));

        break;
      case 8:
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
        break;
      case 9:
        printa_matriz(matriz);
        transposta(matriz);
        break;
      case 10:
        printf("nao consegui fazer!!!");
        //consegui montar um tabuleiro e colocar as rainhas porem a logica de
        //diagonais,horizontais e verticais não batia nem por reza brava
        break;
      default:
        printf("numero invalido!!");
        break;
    }
  }
  return 0;
}