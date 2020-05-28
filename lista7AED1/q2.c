#include <stdio.h>
void calculaTempo(float massa, int *segundos)
{
  *segundos = 0;
  while (massa >= 0.5)
  {
    massa = massa / 2;
    *segundos = *segundos + 50;
  }
  /*
Descrição: recebe um float e um endereço de float e retorna por referencia os segundos gastos
Entradas: um float e um ponteiro float
Saída: não possui saida
*/
}

void mostraHora(int segundos)
{
  int horas, minutos;
  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = (segundos % 3600) % 60;
  printf("\nTempo gasto: \nHoras: %i \nMinutos: %i \nSegundos: %i", horas, minutos, segundos);
/*
Descrição: recebe um inteiro com os segundos para serem mostrados no formato: horas, minutos e segundos.
Entradas: um inteiro
Saída: não possui saida
*/
}

int main()
{
  // declaração de variavel
  float massa;
  int segundos = 0;

  // input de n
  printf("\nDigite a massa em gramas inicial: ");
  scanf("%f", &massa);

  if (massa < 0.5)
  {
    printf("\nMassa ja esta menor que 0.5 gramas!");
  }
  else
  {
    calculaTempo(massa, &segundos);
   // printf("\nSegundos totais: %i", segundos);
    mostraHora(segundos);
  }

  return 0;
}
