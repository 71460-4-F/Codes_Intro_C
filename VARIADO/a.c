#include <stdio.h>

int bingo(int a[6], int b[4][4])
{
	int i, l, c;
	int cont = 0;

	for (i = 0; i < 6; i++)
	{
		for (l = 0; l < 4; l++)
		{
			for (c = 0; c < 4; c++)
			{
				if (a[i] == b[l][c])
				{
					cont += 1;
				}
			}
		}
	}
	return (cont);
}

int main()
{
	int num[6], mat[4][4];
	int i, l, c, cont = 0;

	printf("Entre com os numeros do vetor: \n");
	for (i = 0; i < 6; i++)
	{
		printf(">");
		scanf("%d", &num[i]);
	}

	printf("Entre com os numeros da matirz: \n");
	for (l = 0; l < 4; l++)
	{
		for (c = 0; c < 4; c++)
		{
			printf(">");
			scanf("%d", &mat[l][c]);
		}
	}

	cont = bingo(num, mat);

	printf("\n>%d", cont);

	return (0);
}
