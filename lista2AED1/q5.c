#include <stdio.h>
#include <stdlib.h>
int main()
{
	char x;
	printf("digite um caracter:");
	scanf("%c", &x);
	if (x >= 'A' && x <= 'Z')
		printf("letra maiuscula");
	else if (x >= 'a' && x <= 'z')
		printf("letra minuscula");
	else if (x >= '0' && x <= '9')
		printf("numeral");
	else
		printf("n�o � um numeral,nem maiuscula nem minuscula");

	return 0;
}
