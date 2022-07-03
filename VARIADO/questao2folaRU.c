#include <stdio.h>
#include <stdlib.h>

#define max 100

int main()
{

	int v[max], i, n;

	printf("Quantos elementos vai ter o vetor?\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Digite o valor %d\n", i);
		scanf("%d", &v[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (v[i] % 2 == 0)
		{
			printf("\t\tPar: %d\n", v[i]);
		}
		else if (v[i] % 2 != 0)
		{
			printf("Impar: %d\n", v[i]);
		}
	}

	return 0;
}
