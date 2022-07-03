#include <stdio.h>	// Quixadá - CE 07/10/2016
#include <stdlib.h> //       by Tiago A. F.

int main(void)
{
	int tamV1 = 0, tamV2 = 0;
	int cont = 0, cont2 = 0, auxi = 0;

	scanf("%d", &tamV1);
	int vet1[tamV1];
	for (cont = 0; cont < tamV1; cont++)
	{
		scanf("%d", &vet1[cont]);
	}
	cont = 0;
	scanf("%d", &tamV2);
	int vet2[tamV2];
	for (cont = 0; cont < tamV2; cont++)
	{
		scanf("%d", &vet2[cont]);
	}
	cont = 0;
	for (cont = 0; cont < tamV1; cont++)
	{
		for (cont2 = 0; cont2 < tamV2; cont2++)
		{
			if (vet1[cont] == vet2[cont2])
			{
				auxi++;
				break;
			}
		}
	}
	if (tamV1 != auxi)
	{
		printf("Diferentes\n");
		system("pause");
	}
	else
	{
		cont = 0;
		cont2 = 0;
		auxi = 0;
		for (cont = 0; cont < tamV1; cont++)
		{
			for (cont2 = 0; cont2 < tamV2; cont2++)
			{
				if (vet2[cont] == vet1[cont2])
				{
					auxi++;
					break;
				}
			}
		}
	}

	if (tamV2 == auxi)
		printf("Iguais\n");
	else
		printf("Diferentes\n");

	return 0;
}
