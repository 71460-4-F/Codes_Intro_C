#include <stdio.h>	//    Quixadá - CE  08/10/2016
#include <stdlib.h> //          by Tiago A. F.

int main()
{
	int i = 0, j = 0, k, l = 0;
	int tamVet = 0, maior = 0, especies = 0;

	scanf("%d", &tamVet);
	int vet[tamVet];
	for (i = 0; i < tamVet; i++)
	{
		scanf("%d", &vet[i]);
		if (vet[i] > maior)
		{
			maior = vet[i];
		}
	}
	maior += 1;
	int vet2[maior];
	for (int cont = 0; cont < maior; cont++)
	{
		vet2[cont] = 0;
	}
	for (j = 0; j < tamVet; j++)
	{
		for (k = 1; k < maior; k++)
		{
			if (vet[j] == k)
			{
				vet2[k] = 1;
			}
		}
	}
	for (l = 1; l < maior; l++)
	{
		especies += vet2[l];
	}
	printf("total de especies: %d \n\n", especies);

	return 0;
}
