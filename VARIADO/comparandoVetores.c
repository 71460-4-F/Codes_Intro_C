#include <stdio.h>	// Quixadá - CE 07/10/2016
#include <stdlib.h> //       by Tiago A. F.

int main(void)
{
	int tamV1 = 0, tamV2 = 0, tamG;
	int cont = 0, auxi = 0;

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
	if (tamV1 > tamV2)
		tamG = tamV2;
	else
		tamG = tamV1;

	for (cont = 0; cont < tamG; cont++)
	{
		if (vet1[cont] == vet2[cont])
			auxi++;
	}
	if (tamG == auxi)
		printf("Contido\n");
	else
		printf("Nao contido\n");

	return 0;
}
