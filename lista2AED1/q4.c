#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, y;
	printf("informe os valores de x e y seguidos: ");
	scanf("%d%d", &x, &y);
	if (x >= 0 && y >= 0)
		printf("\no ponto esta no primeiro quadrante");
	else if (x <= 0 && y >= 0)
		printf("\no ponto esta no segundo quadrante");
	else if (x <= 0 && y <= 0)
		printf("\no ponto esta no terceiro quadrante");
	else if (x >= 0 && y <= 0)
		printf("\no ponto esta no quarto quadrante");

	return 0;
}
