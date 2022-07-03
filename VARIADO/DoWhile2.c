#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
	a = 0;
	b = 0;
	printf("digite dois valores: \n");
	do
	{
		scanf("%d", &a);
		scanf("%d", &b);
		printf("valores diferentes \n");
	}

	while (a != b);
	printf("valore iguais\n");

	return 0;
}
