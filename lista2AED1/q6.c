#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	printf("escreva os 3 lados do triangulo:");
	scanf("%d%d%d", &a, &b, &c);
	if (a + b + c != 180)
		printf("os angulos informados nao tem 180 graus!");
	else if (a == 90 || b == 90 || c == 90)
		printf("triangulo retanguo!!");
	else if (a > 90 || b > 90 || c > 90)
		printf("triangulo obtusangulo!!");
	else if (a < 90 && b < 90 && c < 90)
		printf("triangulo acutangulo!!");

	return 0;
}
