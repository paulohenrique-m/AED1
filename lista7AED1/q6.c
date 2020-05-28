#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void k_elevado(int*k){
	int n=2;//inicia a variavel com 2
	while((pow(*k,n))<=(pow(n,*k))){
		n++;//incrementar se for igual
	}
	printf("\no valor de n para q k^n seja maior q n^k eh: %d\n",n);
	
}

int main(){
	int k;
	printf("digite um valor para k:");
	scanf("%d",&k);
	k_elevado(&k);
	return 0;
}

