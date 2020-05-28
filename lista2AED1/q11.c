#include <stdlib.h>
#include <stdio.h>
int main()
{
	float x1, y1, x2, y2, d;
	printf("informe a primeira cordenada:");
	printf("\nx:");
	scanf("%f", &x1);
	printf("\ny:");
	scanf("%f", &y1);
	printf("informe a segunda cordenada:");
	printf("\nx:");
	scanf("%f", &x2);
	printf("\ny:");
	scanf("%f", &y2);
	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("a distancia entre os pontos e: %f", d);
	//distancia=raiz quadrada de->(x2-x1)ao quadrado+(y2-y1)ao quadrado

	return 0;
}
