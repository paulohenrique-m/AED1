#include<stdio.h>
#include<stdlib.h>



int main(){
	int vetor[15];
	int n=0;
	srand(time(NULL));
	printf("atividade de vetor com numero aleatorio :D\n");
	while(n<15){
		vetor[n]=rand()%11;
		printf("\nvetor[%d]:%d",n,vetor[n]);
		n++;
	}

	/*
	descrição:coloca 15 numeros inteiros aleatorios em um vetor
	entrada:não tem
	saida:15 numeros inteiros aleatorios
	*/
	
	
	return 0;
}

