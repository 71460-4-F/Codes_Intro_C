#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int tamV = 0, especies;
	int cont = 0, cont1 = 0, cont2 = 0;
	int maior = 0;

	scanf("%d", &tamV);
	int vet[tamV];
	for (cont = 0; cont < tamV; cont++)
	{
		scanf("%d", &vet[cont]);
		if (vet[cont] > maior)
			maior = vet[cont];
	}
	maior = maior;
	int auxi[maior];
	for (cont1 = 0; cont1 < maior; cont1++)
	{
		for (cont2 = 0; cont2 < maior; cont2++)
		{
			if (vet[cont1] == cont2)
			{
				auxi[vet[cont2]] = 1;
			}
		}
	}
	cont = 0;
	for (cont = 1; cont < maior; cont++)
	{
		especies = auxi[cont];
	}
	printf("%d\n", especies);

	return 0;
}
