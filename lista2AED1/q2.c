#include <stdlib.h>
#include <stdio.h>
int main()
{
	int senha;
	printf("insira a senha: ");
	scanf("%d", &senha);
	if (senha == 5555)
		printf("senha valida!");
	else
		printf("senha invalida!");

	return 0;
}
