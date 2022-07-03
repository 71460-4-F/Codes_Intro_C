#include <stdio.h>	// Quixadá - Ce  20/10/2016
#include <stdlib.h> //      by Tiago A. F.

int main(void)
{
	int tam = 0, auxi1 = 0;
	int i = 0, j = 0, k = 0, l = 0, m = 0;

	scanf("%d", &tam);
	int vet1[tam];
	int vet2[tam];

	for (i = 0; i < tam; i++)
	{
		scanf("%d", &vet1[i]);
	}
	for (j = 0; j < tam; j++)
	{
		scanf("%d", &vet2[j]);
	}
	for (k = 0; k < tam; k++)
	{
		if (k % 2 == 0)
		{
			auxi1 = vet1[k];
			vet1[k] = vet2[k];
		}
		if (k % 2 == 0)
		{
			vet2[k] = auxi1;
		}
	}
	for (l = 0; l < tam; l++)
	{
		printf("%d ", vet1[l]);
	}
	printf("\n");
	for (m = 0; m < tam; m++)
	{
		printf("%d ", vet2[m]);
	}

	return 0;
}
