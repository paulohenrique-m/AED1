#include <stdlib.h>
#include <stdio.h>
int main()
{
	float a, b;
	char x;
	printf("usa a calculadora!(+,-,*,/)\n");
	scanf("%f%c%f", &a, &x, &b);
	switch (x)
	{
	case '+':
		printf("%0.2f", a + b);
		break;
	case '-':
		printf("%0.2f", a - b);
		break;
	case '*':
		printf("%0.2f", a * b);
		break;
	case '/':
		printf("%0.2f", a / b);
		break;
	default:
		printf("op��o invalida!");
		break;
	}

	return 0;
}
