#include <stdio.h>	// Quixadá - CE    07/10/2016
#include <stdlib.h> //        by Tiago A. F.

int main(void)
{
	int qtd = 0;
	int cont = 0;

	scanf("%d", &qtd);
	int vet[qtd];

	for (cont = 0; cont < qtd; cont++)
	{
		scanf("%d", &vet[cont]);
	}
	cont = 0;
	for (cont = 0; cont < qtd; cont++)
	{
		if (vet[cont] % 2 != 0)
			printf("%d ", vet[cont]);
	}
	printf("\n");
	cont = 0;
	for (cont = 0; cont < qtd; cont++)
	{
		if (vet[cont] % 2 == 0)
			printf("%d ", vet[cont]);
	}

	return 0;
}
