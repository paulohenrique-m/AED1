#include <stdio.h>
#include <stdlib.h>
int main()
{
	int d, m, a;
	printf("digite uma data:");
	scanf("%d/%d/%d", &d, &m, &a);
	if (m == 2 && d > 28)
		printf("data invalida");
	else if (a == 2020 && 0 < d < 30 && 0 < m < 12)
		printf("a data eh valida ao ano %d", a);
	else if (a == 2020 && d < 0)
		printf("a data pertence a %d", a - 1);
	if (a != 2020)
		printf("data pertence ao ano %d", a);

	return 0;
}
