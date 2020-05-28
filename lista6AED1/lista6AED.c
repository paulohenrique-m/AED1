#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void maiormenor(int a,int b,int c,int *max,int *min){
	if(a>=b && a>=c){
		*max=a;
		if(b>=c){
			*min=c;
		}else{
			*min=b;
		}
	}else if(b>=a && b>=c){
		*max=b;
		if(a>=c){
			*min=a;
		}else
			*min=c;
	}else if(c>=a && c>=b){
		*max=c;
		if(b>=a){
			*min=a;
		}else{
			*min=b;
		}
	}
/*
descrição:função para pegar 3 numeros e exibir o maior e o menor
entradas:numeros inteiros
saida:um numero maior e outro menor de acordo com o procedimento
*/
}
void media(int a,int b,int c,float *media){
	 *media=(a+b+c)/3.0;
/*
descrição:procedimento para pegar 3 numeros da main e fazer a media deles
entradas:3 numeros inteiros
saida:resultado da media dos 3 numeros em float
*/	
}
void boleana(int a,int b,int *bol){
	if(a==0 && b==0){
		*bol=1;
	}else if(a==1 && b==1){
		*bol=0;
	}else
		*bol=1;
/*
descrição:procedimento para fazer a tabela verdade da lista
entradas:numeros inteiros sendo 0 ou 1
saida:resultado 0 ou 1 
*/
}
void pegar_e_deslocar(int *a,int *b,int *c,int *d,int *e){
int antA=*a,antB=*b,antC=*c,antD=*d,antE=*e;
*a=antE;//joga o é no primeiro e o resto vai pra frente
*b=antA;
*c=antB;
*d=antC;
*e=antD;
    printf("------------------------------------------------\n");
    printf("NOME      ENDERECO    VALOR ANTIGO    VALOR NOVO\n");
    printf("a   ||    |%p|      |%i|     |%i|\n",a,antA,*a);
    printf("b   ||    |%p|      |%i|     |%i|\n",b,antB,*b);
    printf("c   ||    |%p|      |%i|     |%i|\n",c,antC,*c);
    printf("d   ||    |%p|      |%i|     |%i|\n",d,antD,*d);
    printf("e   ||    |%p|      |%i|     |%i|\n",e,antE,*e);
	printf("------------------------------------------------\n");
/*
descrição:procedimento que pega 5 numeros e joga o ultimo para o primeiro mostrando o local de cada um antes e depois
entradas:5 numeros inteiros
saida:5 numeros inteiros e o local deles
*/
}




int main(){
	int opc=-1;
	int n1,n2,n3,maior,menor;//q1
	int a1,a2,a3;//q2
	float x=0;//q2
	int num1,num2,bol;//q3
	int num_1,num_2,num_3,num_4,num_5;//q4
    char A = 'A';//q5
  	int B = 1;//
    float C = 1.0;//
	double D = 0.0;//q5

  	char *Ap = &A;
  	int *Bp = &B;
 	float *Cp = &C;
 	double *Dp = &D;
	while(opc!=0){
		printf("\n----------------MENU----------------\n");
		printf("1-MAIOR E MENOR POR REFERENCIA\n");
		printf("2-PEGAR 3 NUMEROS VOLTANDO COM MEDIA\n");
		printf("3-BOLEANA ¬(A ^B)\n");
		printf("4-PEGAR 5 NUMEROS E MOVER PARA ESQUERDA\n");
		printf("5-MOSTRAR O TAMANHO DAS VARIAVEIS\n");
		printf("6-QUESTÃO DE LOGICA\n");
		printf("0-SAIR\n");
		scanf("%i",&opc);
		switch(opc){
			case 0:
				printf("\nsaindo...");
				break;
			case 1:
				printf("passe 3 numeros para mostrar o maior e o menor:");
				scanf("%i%i%i",&n1,&n2,&n3);
				maiormenor(n1,n2,n3,&maior,&menor);
				printf("os 3 numeros sao %i,%ie %i\n o maior eh %i e o menor eh %i",n1,n2,n3,maior,menor);
				break;
			case 2:
				printf("escreva 3 numeros inteiros para ter sua media:");
				scanf("%i%i%i",&a1,&a2,&a3);
				media(a1,a2,a3,&x);
				printf("\na media de %i,%i e %i eh %0.2f",a1,a2,a3,x);
				break;
			case 3:
				printf("de 2 valores boleanos entre 0 e 1 (sendo 0=falso e 1=verdadeiro):");
				scanf("%i%i",&num1,&num2);
				boleana(num1,num2,&bol);
				printf("%i e %i=%i",num1,num2,bol);
				break;
			case 4:
				printf("insira 5 valores:");
    			scanf("%i%i%i%i%i",&num_1,&num_2,&num_3,&num_4,&num_5);
    			pegar_e_deslocar(&num_1,&num_2,&num_3,&num_4,&num_5);	
				break;	
			case 5:
				printf("\n\nO endereco do char A e %p . Essa variavel ocupa %d bytes.\n",&A, sizeof(A));
  				printf("O endereco do int B e %p . Essa variavel ocupa %d bytes.\n",&B, sizeof(B));
 				printf("O endereco do float C e %p . Essa variavel ocupa %d bytes.\n",&C, sizeof(C));
  				printf("O endereco do double D e %p . Essa variavel ocupa %d bytes.\n",&D, sizeof(D));
  				printf("---------------------------------------------------------------------");
  				printf("\nO endereco do char *A e %p . Essa variavel ocupa %d bytes.\n", &Ap, sizeof(Ap));
  				printf("O endereco do int *B e %p . Essa variavel ocupa %d bytes.\n", &Bp, sizeof(Bp));
  				printf("O endereco do float *C e %p . Essa variavel ocupa %d bytes.\n", &Cp, sizeof(Cp));
  				printf("O endereco do double *D e %p . Essa variavel ocupa %d bytes.\n\n", &Dp, sizeof(Dp));
				break;
			case 6:
				printf("No misterio 1 da pra ver que a variavel do local 'x' recebe o valor passado como refencia pela função e imprime.\n");
				printf("Em misterio 2 a variavel 'y' nao recebe nenhum valor e acaba atribuindo o valor adicionado da mesma variavel 'x'.\n");
				break;
			default:
			    printf("Escolha invalida!\n");
    	 		printf("\nescolha um numero dentro da lista\n");
   					
		}	
}
	
	
	return 0;
}
