#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a, b, i, cont;

	printf("Digite os números\n");
	scanf("%d %d", &a, &b);

	for (i = a; i <= b; i++)
	{
		if ((i % 2) == 0 && (i % 3) == 0)
			cont = cont + i;
	}
	printf("\n%d\n", cont);
	return 0;
}
