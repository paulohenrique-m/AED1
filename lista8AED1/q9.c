#include<stdio.h>
#include<stdlib.h>



int main(){
	int vetor[15];
	int n=0;
	float media;
	int soma=0,somador=0;//soma é pra media e somador pra quantas vezes a media aparece abaixo da media
	int maior=18,menor=40;
	srand(time(NULL));
	while(n<15){
		vetor[n]=rand()%23+18;
		printf("vetor[%d]:%d\n",n,vetor[n]);
		if(vetor[n]>maior){
			maior=vetor[n];
		}
		if(vetor[n]<menor){
			menor=vetor[n];
		}
		soma+=vetor[n];
		n++;
	}
	media=soma/15.0;
	n=0;
	while(n<15){
		if(vetor[n]<media);
			somador++;
		n++;
	}
	printf("maior: %d\n",maior);
	printf("menor: %d\n",menor);
	printf("media: %0.2f\n",media);
	printf("a temperatura ficou %d vezes abaixo da media %0.2f",somador,media);
	/*
	descrição:coloca 15 numeros inteiros aleatorios em um vetor
	entrada:não tem
	saida:15 numeros inteiros aleatorios
	*/
	
	
	return 0;
}

