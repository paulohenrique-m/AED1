#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>
//adicinal:tentar mostrar os pontos aleatorios feitos pela função rand--

void calculaDistancia(int x1,int y1,int n,float *soma){
	srand(time(NULL));
	int x2,y2;
	float aux,aux2;
	while(n>0){
		n--;
		x2=rand()/100;//gerando valores aleatorios entre 0 e 100 para x
		y2=rand()/100;//gerando valores aleatorios entre 0 e 100 para y
		aux=x1-x2;
		aux2=y1-y2;
		if (aux < 0){
			aux *= -1;
		}
		if (aux2 < 0){
			aux2 *= -1;
		}
		*soma+=aux+aux2;
	}
	/*
	descrição:procedimento para gerar pontos aleatorios e adicionar valores a "soma"
	entrada: numeros float e inteiros aleatorios entre 0 a 100 escolhidos pela função rand
	saída:numeros float gerados pelo procedimento alem de numeros aleatorios dentro da soma
	*/
}


int main(){
	float soma=0;
	int x,y,n;
	printf("digite o valor de x:");
	scanf("%d",&x);
	printf("digite o valor de y:");
	scanf("%d",&y);
	printf("digite quantos pontos quer adicionar:");
	scanf("%d",&n);
	calculaDistancia(x,y,n,&soma);//chama função passando os parametros
	printf("a soma das distancias eh %0.2f",soma);
	
	return 0;
}
