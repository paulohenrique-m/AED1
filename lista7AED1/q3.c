#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n=0,quant1=0,quant2=0,quant3=0;
	float p_compra,p_venda,lucro,t_compra=0,t_venda=0;
	printf("quanto quiser parar de colocar mercadorias,digite -1\n");
	while(n!=-1){
		printf("informe o codigo do produto:");
		scanf("%d",&n);
		if(n!=-1){
			printf("informe o preço da compra:");
			scanf("%f",&p_compra);
			printf("informe o preço da venda:");
			scanf("%f",&p_venda);
			lucro=100*(p_venda-p_compra)/p_compra;//determina o lucro
			//para encaixar em cada parte 
			if(lucro<10){
				quant1++;
			}else if(lucro>=10&&lucro<=20){
				quant2++;
			}else {
				quant3++;
			}
			t_compra=t_compra+p_compra;
			t_venda=t_venda+p_venda;
		}	
		lucro=100*(t_venda-t_compra)/t_compra;
	}
printf("quantidades de mercadoria com lucro<10%%:%d\n",quant1);
printf("quantidades de mercadoria com lucro<20%%:%d\n",quant2);	
printf("quantidades de mercadoria com lucro>20%%:%d\n",quant3);	
printf("valor total das compras:%0.2f\n",t_compra);	
printf("valor total das vendas:%0.2f\n",t_venda);	
printf("lucro total(%%): %0.2f\n",lucro);	
	return 0;
}
