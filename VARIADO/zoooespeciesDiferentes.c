#include <stdio.h>	//    Quixadá - CE  08/10/2016
#include <stdlib.h> //          by Tiago A. F.

int main()
{
	int i = 0, j = 0, k, l = 0, m = 0; //    variaveis do for
	int tamVet = 0, maior = 0, especies = 0;

	scanf("%d", &tamVet);
	int vet[tamVet]; // atribuindo tamanho do vetor

	for (i = 0; i < tamVet; i++)
	{
		scanf("%d", &vet[i]); // preenchendo o vetor
		if (vet[i] > maior)
		{
			maior = vet[i]; // quardando o maior num na variavel maior
		}
	}
	maior += 1;
	int vet2[maior]; // declarando vetor 2
	for (int cont = 0; cont < maior; cont++)
	{
		vet2[cont] = 0; // atribuindo 0 a todo o vetor
	}
	// printf("o maior foi %d\n", maior);   // mostra o maior
	for (j = 0; j < tamVet; j++)
	{
		for (k = 1; k < maior; k++)
		{
			if (vet[j] == k)
			{ // comparando elementos com o numero do contador para guardar no vetor 2
				vet2[k] = 1;
			}
		}
	}
	for (l = 1; l < maior; l++)
	{
		printf("vetor %d = %d \n\n", l, vet2[l]); // apenas para mostrar os elementos dentro do vetor 2
	}

	for (m = 1; m < maior; m++)
	{
		especies += vet2[m];
	}

	printf("total de especies: %d \n\n", especies);

	return 0;
}
