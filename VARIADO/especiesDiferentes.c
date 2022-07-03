#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int tamV = 0, especies;
	int cont = 0, cont1 = 0, cont2 = 0;
	int x = 0, y = 0;
	scanf("%d", &tamV);
	int vet[tamV];
	for (cont = 0; cont < tamV; cont++)
	{
		scanf("%d", &vet[cont]);
	}
	for (cont1 = 0; cont1 < tamV; cont1++)
	{
		for (cont2 = 0; cont2 < tamV; cont2++)
		{
			if (vet[cont1] != vet[cont2])
			{
				x = x + 1;
			}
			else
				x = x - 1;
		}
	}
	cont1 = 0;
	cont2 = 0;
	for (cont1 = 0; cont1 < tamV; cont1++)
	{
		for (cont2 = 0; cont2 < tamV; cont2++)
		{
			if (vet[cont1] == vet[cont2])
			{
				y = y + 1;
			}
			// else y =  y - 1;
		}
	}
	printf("x = %d", x);
	printf("y = %d", y);
	especies = x - y;
	printf("%d \n", especies);

	return 0;
}
