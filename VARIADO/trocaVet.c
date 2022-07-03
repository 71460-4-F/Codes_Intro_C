#include <stdio.h>	//     Quixadá - CE   20/10/2016
#include <stdlib.h> //           by Tiago A. F.

int main(void)
{
	int tamVet = 0, k1 = 0, k2 = 0;
	int i = 0, l = 0;
	int auxi = 0;

	scanf("%d", &tamVet);
	int vet[tamVet];
	for (i = 0; i < tamVet; i++)
	{
		scanf("%d", &vet[i]);
	}
	scanf("%d", &k1);
	scanf("%d", &k2);

	auxi = vet[k1];
	vet[k1] = vet[k2];
	vet[k2] = auxi;

	for (l = 0; l < tamVet; l++)
	{
		printf("%d ", vet[l]);
	}

	return 0;
}
