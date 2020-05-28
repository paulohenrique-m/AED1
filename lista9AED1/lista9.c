#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constante
#define N 10

//Funções
int busca(int, int *, int);
void maximo(int *, int *, int);
void minimo(int *, int *, int);
void soma(int *, int *, int);
void produto(int *, int *, int);
void media(float *, int *, int);
void questao7();
void questao8();
void questao9();
void questao10();
int comparaStr(char *, char *, int);
void inverteStr(char *str1, char *str2, int ini, int fim);

int menu();
void setVetorManual(int *);

int main() {
  int index, k, b;
  int vet[N];
  int max = 0;
  int min = 999;
  int sum = 0;
  int prod = 1;
  int opcaoVetor = 0;
  float med = 0;

  do {
    index = menu();
    switch (index) {
      case 1:
        puts("Opcao 1: Um vetor de 10 posicoes sera preenchido com valores entre 0 - 100.");
        setVetorManual(&vet);
        printf("\nInforme um valor k a ser buscado: ");
        scanf("%d", &k);
        b = busca(k, vet, 0);
        if (b != -1)
          printf("\n\t***Valor na posicao %d\n", b);
        else
          printf("\n\t***Valor nao encontrando.\n");
        //Imprime o vetor para conferência.
        for (int i = 0; i < N; i++)
          printf("\nvet[%d] = %d", i, vet[i]);
        break;
      case 2:
        puts("Opcao 2: Um vetor de 10 posicoes sera preenchido automaticamente com valores entre.");
        puts("O maior valor desde vetor sera retornado.");
        setVetorManual(&vet);
        (vet);
        maximo(&max, vet, 0);
        printf("\n\t***Maximo = %d\n", max);
        //Imprime o vetor para conferência.
        for (int i = 0; i < N; i++)
          printf("\nvet[%d] = %d", i, vet[i]);
        break;
      case 3:
        puts("Opcao 3: Um vetor de 10 posicoes sera preenchido automaticamente com valores entre.");
        puts("O menor valor desde vetor sera retornado.");
        setVetorManual(&vet);
        (vet);
        minimo(&min, vet, 0);
        printf("\n\t***Minimo = %d\n", min);
        //Imprime o vetor para conferência.
        for (int i = 0; i < N; i++)
          printf("\nvet[%d] = %d", i, vet[i]);
        break;
      case 4:
        puts("Opcao 4: Um vetor de 10 posicoes sera preenchido automaticamente com valores entre.");
        puts("A soma dos valores desde vetor sera retornada.");
        setVetorManual(&vet);
        (vet);
        soma(&sum, vet, 0);
        printf("\n\t***Soma = %d\n", sum);
        //Imprime o vetor para conferência.
        for (int i = 0; i < N; i++)
          printf("\nvet[%d] = %d", i, vet[i]);
        break;
      case 5:
        puts("Opcao 5: Um vetor de 10 posicoes sera preenchido automaticamente com valores entre.");
        puts("O produto dos valores desde vetor sera retornado.");
        setVetorManual(&vet);
        (vet);
        produto(&prod, vet, 0);
        printf("\n\t***Produto = %d\n", prod);
        //Imprime o vetor para conferência.
        for (int i = 0; i < N; i++)
          printf("\nvet[%d] = %d", i, vet[i]);
        break;
      case 6:
        puts("Opcao 6: Um vetor de 10 posicoes sera preenchido automaticamente com valores entre.");
        puts("A media dos valores desde vetor sera retornada.");
        setVetorManual(&vet);
        (vet);
        media(&med, vet, 0);
        printf("\n\t***Media = %f\n", med);
        //Imprime o vetor para conferência.
        for (int i = 0; i < N; i++)
          printf("\nvet[%d] = %d", i, vet[i]);
        break;
      case 7:
        puts("Opcao 7: Testa se duas strings sao semelhantes ou não.");
        questao7();
        break;
      case 8:
        puts("Opcao 8: Imprime três strings em ordem alfabetica.");
        questao8();
        break;
      case 9:
        puts("Opcao 9: Testa se uma palavra e palindromo.");
        questao9();
        break;
      case 10:
        puts("Opcao 10: Testa se uma palavra e palindromo, usando recursao.");
        questao10();
        break;
      default:
        index = 0;
        printf("SAINDO...");
        break;
    }
  } while (index != 0);

  return 0;
}
int busca(int k, int *vet, int elem) /*q1*/ {
  if (elem >= N)
    return -1;
  else if (k == vet[elem])
    return elem;
  else
    return busca(k, vet, ++elem);
  /*
    descrição: função para retornar busca de elementos
    entrada:2 valores inteiros e 1 ponteiro
    saida:3 valores inteiros
    */
}
void maximo(int *max, int *vet, int elem) /*q2*/ {
  if (elem >= N)
    return;

  if (*max < vet[elem])
    *max = vet[elem];
  maximo(max, vet, ++elem);
  /*
    descrição:função para pegar máximo valor no vetor
    entrada:2 ponteiros inteiros e 1 valor inteiro
    saida:3 valores inteiros
    */
}
void minimo(int *min, int *vet, int elem) /*q3*/ {
  if (elem >= N)
    return;

  if (*min > vet[elem])
    *min = vet[elem];
  minimo(min, vet, ++elem);
  /*
    descrição:função para pegar o minimo elemento do vetor
    entrada:2 ponteiros e um valor inteiro
    saida:3 valores inteiros
    */
}
void soma(int *sum, int *vet, int elem) /*q4*/ {
  if (elem >= N)
    return;

  *sum += vet[elem];
  soma(sum, vet, ++elem);
  /*
    descrição:função para somar valores do vetor
    entrada:2 ponteiros e 1 inteiro
    saida:3 inteiros
    */
}
void produto(int *prod, int *vet, int elem) /*q5*/ {
  if (elem >= N)
    return;

  *prod *= vet[elem];
  produto(prod, vet, ++elem);
  /*
    descrição:função para fazer o produto dos valores no vetor
    entrada:2 ponteiros e 1 inteiro
    saida:3 valores inteiros
    */
}
void media(float *med, int *vet, int elem) /*q6*/
{
  if (elem >= N)
    *med = *med / N;
  else {
    *med += vet[elem];
    media(med, vet, ++elem);
    /*
    descrição:função para retornar a media dos numeros do vetor
    entrada:2 ponteiros e 1 inteiro
    saida:3 inteiros
    */
  }
}
void questao7() {
  char string1[N];
  char string2[N];
  int strIguais = 1;

  setbuf(stdin, NULL);
  printf("Informe a primeira string: ");
  scanf("\n%s", &string1);
  setbuf(stdin, NULL);
  printf("Informe a segunda string: ");
  scanf("\n%s", &string2);

  for (int i = 0; string1[i] != '\0' || string2[i] != '\0'; i++) {
    if (string1[i] != string2[i]) {
      strIguais = 0;
      break;
    }
  }
  if (strIguais == 0) {
    puts("As strings sao diferentes.");
    printf("str1 = %s", string1);
    printf("\nstr2 = %s", string2);
  } else {
    puts("As strings sao iguais");
    printf("str1 = %s", string1);
    printf("\nstr2 = %s", string2);
  }
  /*
    descrição:algoritmo para indentificar se 2 strings são iguais ou diferentes
    entrada:2 strings
    saida:não tem
    */
}
void questao8() {
  char nome1[N];
  char nome2[N];
  char nome3[N];
  int alt_Nome1, alt_Nome2, alt_Nome3;

  setbuf(stdin, NULL);
  printf("Informe o primeira nome: ");
  scanf("%[^\n]", &nome1);
  setbuf(stdin, NULL);
  alt_Nome1 = alt_Nome(nome1);
  printf("Informe o segundo nome: ");
  scanf("%[^\n]", &nome2);
  setbuf(stdin, NULL);
  alt_Nome2 = alt_Nome(nome2);
  printf("Informe o terceiro nome: ");
  scanf("%[^\n]", &nome3);
  alt_Nome3 = alt_Nome(nome3);

  //Condições para exibição das strings ordenadas.
  if (alt_Nome1 < alt_Nome2 && alt_Nome1 < alt_Nome3) {
    if (alt_Nome2 < alt_Nome3) {
      printf("%s", nome1);
      printf("\n%s", nome2);
      printf("\n%s", nome3);
    } else {
      printf("%s", nome1);
      printf("\n%s", nome3);
      printf("\n%s", nome2);
    }
  } else if (alt_Nome2 < alt_Nome1 && alt_Nome2 < alt_Nome3) {
    if (alt_Nome1 < alt_Nome3) {
      printf("%s", nome2);
      printf("\n%s", nome1);
      printf("\n%s", nome3);
    } else {
      printf("%s", nome2);
      printf("\n%s", nome3);
      printf("\n%s", nome1);
    }
  } else {
    if (alt_Nome1 > alt_Nome2) {
      printf("%s", nome3);
      printf("\n%s", nome1);
      printf("\n%s", nome2);
    } else {
      printf("%s", nome3);
      printf("\n%s", nome2);
      printf("\n%s", nome1);
    }
  }
  /*
    descrição:algoritmo para pegar nomes e colocar em ordem alfabetica
    entrada:3 strigs
    saida:3 strings
    */
}
void questao9() {
  char str[N];
  char invStr[N];
  int i, j, letraDiferente = 1, size;

  setbuf(stdin, NULL);
  printf("Informe uma string: ");
  scanf("%[^\n]", &str);

  size = strlen(str);
  for (i = 0; i < size; i++)
    str[i] = tolower(str[i]);

  j = strlen(str) - 1;
  for (i = 0; i < size; i++) {
    invStr[i] = str[j];
    j--;
  }
  invStr[i] = '\0';
  for (i = 0; i < size; i++) {
    if (str[i] != invStr[i]) {
      letraDiferente = 0;
      break;
    }
  }

  printf("\nPalavra = %s \tPalavra invertida = %s\n", str, invStr);

  if (letraDiferente == 1)
    printf("\nA palavra e palindroma.");
  else
    printf("\nA palavra nao e palindroma.");
  /*
    descrição:algoritmo para ler uma palavra e retornar se ela é palindroma ou não
    entrada:string
    saida:não tem
    */
}
void questao10() {
  char str[N];
  char invStr[N];
  int i, j, size;

  setbuf(stdin, NULL);
  printf("Informe uma string: ");
  scanf("%[^\n]s", &str);
  size = strlen(str);
  for (i = 0; i < size; i++)
    str[i] = tolower(str[i]);
  inverteStr(str, invStr, 0, strlen(str) - 1);
  printf("\nPalavra = %s \tPalavra invertida = %s\n", str, invStr);
  if (comparaStr(str, invStr, 0) == 1)
    printf("\nA palavra e palindroma.");
  else
    printf("\nA palavra nao e palindroma.");
}
int comparaStr(char *str1, char *str2, int elem) {
  if (elem > N)
    return 0;
  else if (str1[elem] != str2[elem])
    return 0;
  else if (str1[elem] == str2[elem])
    comparaStr(str1, str2, ++elem);

  return 1;
  /*
    descrição:função para comprara string
    entrada:2 ponteiros e 1 string
    saida:string
    */
}
void inverteStr(char *str1, char *str2, int ini, int fim) {
  if (ini > strlen(str1)) {
    return;
  } else {
    str2[ini] = str1[fim];
    inverteStr(str1, str2, ++ini, --fim);
  }
  /*
    descrição:função para inverter string
    entrada:2 ponteiros e 2 inteiros
    saida:2 strings e 2 inteiros
    */
}
int menu() {
  int index = 0;
  puts(
      "\n=====================MENU=====================\n"
      "\nEscolha uma das opcoes abaixo: \n");
  do {
    puts(
        "1 - Atividade 1.\n"
        "2 - Atividade 2.\n"
        "3 - Atividade 3.\n"
        "4 - Atividade 4.\n"
        "5 - Atividade 5.\n"
        "6 - Atividade 6.\n"
        "7 - Atividade 7.\n"
        "8 - Atividade 8.\n"
        "9 - Atividade 9.\n"
        "10 - Atividade 10.\n"
        "0 - Sair.");

    scanf("%d", &index);

    if (index >= 0 && index <= 10)
      return index;
    else
      puts("\nValor invalido. Escolha uma das opcoes abaixo:\n");
  } while (index != 0);

  return index;
}
int alt_Nome(char *nome) {
  return (int)(nome[0]);
}
void setVetorManual(int *vet) {
  for (int i = 0; i < N; i++) {
    printf("vet[%d] = ", i);
    scanf("%d", &vet[i]);
  }
}