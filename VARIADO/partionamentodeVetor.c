#include <stdio.h>	// Quixadá - CE  11/10/2016
#include <stdlib.h> //       by Tiago A. F.

int main(void)
{
	int tamVet = 0;
	int chave = 0;
	int vazio = 0; // Vetores foram declarados depois devido atribiução de tamnho indicada pelo usuario.
	int somaVetMenor = 0;
	int somaVetMaior = 0;

	scanf("%d", &tamVet);
	int num[tamVet];
	int numMaiorK[tamVet];
	for (int cont = 0; cont < tamVet; cont++)
	{
		numMaiorK[cont] = vazio;
	}
	int numMenorIgualK[tamVet];
	for (int cont = 0; cont < tamVet; cont++)
	{
		numMenorIgualK[cont] = vazio;
	}
	for (int i = 0; i < tamVet; i++)
	{
		scanf("%d", &num[i]);
	}
	scanf("%d", &chave);
	for (int j = 0; j < tamVet; j++)
	{
		if (num[j] <= chave)
		{
			numMenorIgualK[j] = num[j];
			somaVetMenor += numMenorIgualK[j];
		}
		if (num[j] > chave)
		{
			numMaiorK[j] = num[j];
			somaVetMaior += numMaiorK[j];
		}
	}
	if (somaVetMenor == vazio)
	{
		printf("-1 \n");
	}
	else
	{
		for (int x = 0; x < tamVet; x++)
		{
			if (numMenorIgualK[x] != vazio)
			{
				printf("%d ", numMenorIgualK[x]);
			}
		}
	}
	printf("\n");
	if (somaVetMaior == vazio)
	{
		printf("-1 \n");
	}
	else
	{
		for (int y = 0; y < tamVet; y++)
		{
			if (numMaiorK[y] != vazio)
			{
				printf("%d ", numMaiorK[y]);
			}
		}
	}

	return 0;
}
