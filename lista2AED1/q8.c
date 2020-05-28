#include <stdlib.h>
#include <stdio.h>
int main()
{
	float a, b;
	int operador;
	printf("digite os dois numeros para calcular:");
	scanf("%f %f", &a, &b);
	printf("qual operador deseja usar\n1)+\n2)-\n3)*\n4)/\n");
	scanf("%d", &operador);
	switch (operador)
	{
	case 1:
		printf("%0.2f", a + b);
		break;
	case 2:
		printf("%0.2f", a - b);
		break;
	case 3:
		printf("%0.2f", a * b);
		break;
	case 4:
		printf("%0.2f", a / b);
		break;
	}

	return 0;
}
