#include <stdio.h>
#include <stdlib.h>

int main()
{

	int quantidade, c, i, j, aux, elementos[50];

	scanf("%d", &quantidade);

	for (c = 0; c < quantidade; c++)
	{

		scanf("%d", &elementos[c]);
	}

	for (i = 0; i < quantidade; i++)
	{
		for (j = 0; j < quantidade; j++)
		{

			if (elementos[i] < elementos[j])
			{
				aux = elementos[j];
				elementos[j] = elementos[i];
				elementos[i] = aux;
			}
		}
	}

	for (c = 0; c < quantidade; c++)
	{
		printf("%d ", elementos[c]);
	}

	return 0;
}
