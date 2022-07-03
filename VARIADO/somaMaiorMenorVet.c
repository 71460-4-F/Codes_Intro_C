#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int vet[5];
	int soma = 0, menor = 0, maior = 0;
	int i = 0, j = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &vet[i]);
		if (vet[i] >= maior)
		{
			maior = vet[i];
		}
	}
	menor = maior;
	for (j = 0; j < 5; j++)
	{
		if (vet[j] <= menor)
		{
			menor = vet[j];
		}
	}
	soma = menor + maior;
	printf("%d\n", soma);

	return 0;
}
