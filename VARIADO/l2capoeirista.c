#include <stdio.h>
#include <stdlib.h>
#define max 100

int main()
{
	int n, i, vetor[max];
	printf("digite a quantidades de elementos: \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("digite os elemeentos: \n");
		scanf("%d", &vetor[i]);
	}

	printf("\t%d \n", vetor[i]);

	return 0;
}
