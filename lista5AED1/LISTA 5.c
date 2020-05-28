#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int numeros(int num1,int num2,int num3){//questão 1
	return num2;
/*
descrição:recebe 3 numeros da propria função e retorna o do meio
entrada:valores inteiros para retornar o do meio
saida:inteiro, valores(9,2,4)
*/
}
float media(int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8,int n9,int n10){//questão 2

return(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10/10.0);
/*
descrição:recebe 10 numeros por parametros e devolve a media
entrada:entrada dos numeros de 10 a 100 fazendo media
saida:um valor float 460
*/
}
int boleano(int a,int b){//questão 3

	if(a==0 && b==1){
		return 1;
	}
	else if(a==1 && b==0){
		return 1;
	}else
	return 0;
/*
descrição:função que recebe valores 1 e 0 fazendo XOR sendo 0 falso e 1 verdadeiro
entrada:entra um valor inteiro 1 e 0
saida:sai um valor inteiro 1 de acordo com a tabela XOR
*/
}
int fatorial(int n){//questão 4 e 6
	int valorfat=1;
	while(n>1){
		valorfat*=n;
		n--;
	}
	return valorfat;
/*
FUNÇÃO FATORIAL QUE SERVE PRA 4 E PRA 6
*/
}
void numeros_sequencia(){//questão 4
	int numerador=100,denominador=0;
	float soma=0;
	while(denominador<20){
		soma+=(float)numerador/fatorial(denominador);
		numerador--;
		denominador++;	
	}
	printf("o valor eh:%f",soma);
/*
descrição:procedimento que calcula a soma dos 20 primeiros numeros da serie citada na lista 5
entrada:entra os numeros inteiros citados na lista 5 que são 100 no numerador e 1 no denominador
saida:sai o resultado inteiro sendo 269.10...
*/
}
float somatorio(){//questão 5
	int numerador=1,denominador=15;
	float soma=0;
	while(denominador>0){	
		soma+=(float)numerador/(denominador*denominador);
		numerador=numerador*2;
		denominador--;
	}

	return soma;
/*
descrição:função pra calcular o somatorio da questão 5 na lista 5
entrada:um valor inteiro seguindo da função sendo numerador1 e  e o quadrado do denominador que vale 15
saida:soma final em float valendo 19078 
*/
}
float seno(float x){//questão 6
	int n=3;
	int soma=1;
	float valor_de_tudo=x;
	while(valor_de_tudo<9999.0 && valor_de_tudo>-9999.0){
		if (soma){
			valor_de_tudo+=pow(x,n)/fatorial(x);
			soma=0;
		}else{
			valor_de_tudo-=pow(x,n)/fatorial(x);
			soma=1;
		}
		n+=2;	
	}
	
	
	return valor_de_tudo;
/*
descrição:função para calcular seno de um numero real inteiro
entrada:numero inteiro valendo 10
saida:resultado da soma proposta pela função em float
*/
}
int receber(int max, int min){//questão 7
	int aux,aleatorio;
	if(max>min){
		srand(time(NULL));
		aux=max-min;
		aleatorio=rand()%aux+min;
		
	}
	else
		return aleatorio=-1;
	
	
	return aleatorio;
/*
descrição:função para pegar um numero aleatorio entre um maximo e um minimo(se o minimo for maior q o maximo então deve dar -1)
entrada:dois numeros inteiros como maximo valendo 1000 e minimo valendo 1
saida:resultado aleatorio inteiro entre 1000 e 1
*/
} 



void main(){
	int opc=-1;
	while(opc!=0){
		printf("\nescolha uma atividade para ler:\n");
		printf("1-funcao que retorna elemento do meio\n2-10 numeros como parametro retornando a media\n3-funcao com valores booleanos\n4-crie um procedimento que calcule os 20 primeiros numeros da sequencia da lista 5\n5-somatorio lista 5\n6-funcao com numero real x para seno\n7-maximo e minimo\n0-SAIR\n\n");
		scanf("%i",&opc);
	
		switch(opc){
			case 0:
				printf("\nsaindo..");
				break;
			case 1:
				printf("o numero do meio eh:%i\n------------------------",numeros(9,2,4));
				break;
			case 2:
				printf("a media dos numeros eh:%0.2f\n------------------------",media(10,20,30,40,50,60,70,80,90,100));
				break;
			case 3:
				printf("a xor b:%i\n------------------------ ",boleano(1,0));
				break;
			case 4:
				numeros_sequencia();
				printf("\n------------------------");
				break;
			case 5:
				printf("o valor eh:%f\n------------------------",somatorio());
				break;
			case 6:
				printf("o valor de x eh %f\n------------------------",seno(10.0));
				break;
			case 7:
				printf("um numero aleatorio entre %i e %i eh %i\n------------------------",1000,1,receber(1000,1));
				break;
			default:
				printf("opcao invalida!!\n------------------------");
				
	
	}
}

}
