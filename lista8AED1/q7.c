#include<stdio.h>
#include<stdlib.h>



int main(){
	int vetor[10];
	int n=0;
	
	printf("escreva 10 numeros para colocar em um vetor:");
	while(n<10){
		scanf("%d",&vetor[n]);
		n++;
	}
	n=0;
	while(n<10){
		if(n==vetor[n]){
			printf("\nposicao %d:vetor[%d]",n,vetor[n]);
		}
		n++;
	}
	
	/*
	descrição:programa pra pegar 10 numeros inteiros lidos e mostrar o lugar do vetor
	entrada:10 numeros inteiros
	saida:numeros inteiros iguais a posição do vetor
	*/
	
	
	return 0;
}

