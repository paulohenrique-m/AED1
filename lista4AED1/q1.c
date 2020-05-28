#include <stdio.h>
int main() {
  
	int L; 
	
	printf("Digite quantos numeros da sequencia de fibonacci quer ver:");
	scanf("%d",  &L);

	int ant1 = 0, ant2 = 1, atual;

	for (int i=1;i<=L;i++)
	{
		if (i==1)
			printf("0 ");
		else if (i==2) 
			printf("1 ");
		else 
		{ 

			atual = ant1 + ant2;
			printf("%d ", atual);

			//Atualizar os anteriores
			ant1 = ant2;
			ant2 = atual;

		}

	}
	

	printf("\n\n");
  return 0;
}
