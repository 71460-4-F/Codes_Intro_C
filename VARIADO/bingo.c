#include <stdio.h>
#include <stdlib.h>

int main()
{
	int mat[3][3],
		i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	int somaL[3] = {0, 0, 0},
		somaC[3] = {0, 0, 0},
		somaDP = 0,
		somaDS = 0, p = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			somaL[p] += mat[i][j];
			if (i >= 2)
			{
				p++;
			}
		}
	}

	p = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			somaC[p] += cubo[j][i];
			if (i >= 2)
			{
				p++;
			}
		}
	}

	for (i = 0; i < 3; i++)
	{
		somaDP += cubo[i][i];
	}

	for (j = 0; j < 3; j++)
	{
		somaDS += cubo[j][j];
	}

	for (j = 0; j < 3; j++)
	{
		printf("\n%d", somaL[j]);
	}
	for (j = 0; j < 3; j++)
	{
		printf("\n%d", somaC[j]);
	}
	printf("\n%d", somaDP);
	printf("\n%d", somaDS);

	int result = 0;

	if (somaL[0] == somaC[0] && somaC[0] == somaDP && somaDP == somaDS)
	{
		if (somaL[1] == somaC[1] && somaC[1] == somaDP && somaDP == somaDS)
		{
			if (somaL[2] == somaC[2] && somaC[2] == somaDP && somaDP == somaDS)
			{
				result++;
			}
		}
	}

	if (result)
	{
		printf("sim");
	}
	else
	{
		printf("nao");
	}

	return (0);
}
