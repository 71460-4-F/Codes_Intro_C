#include <stdio.h>
#include <stdlib.h>
int main(void)
{

	int x = 0, y = 0; // determinates do tamanho do vetor
	int a = 0, b = 0; // variaveis do for

	scanf("%d", &x);
	int vetx[x];
	for (a = 0; a < x; a++)
	{
		scanf("%d", &vetx[a]);
	}
	printf("\n");
	scanf("%d", &y);
	int vety[y];
	for (b = 0; b < y; b++)
	{
		scanf("%d", &vety[b]);
	}

	for (a = 0; a < x; a++)
	{
		for (b = 0; b < y; b++)
		{
			if ((vetx[a] == vety[a]) || (vetx[a] == vety[a]))
			{
				printf("sim\n");
				system("pause");
			}
			else
				printf("nao");
			system("pause");
		}
	}

	return 0;
}
