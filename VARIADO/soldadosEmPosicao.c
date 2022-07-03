#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int mat[3][3];
	int i = 0, j = 0;
	int cont = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	i = 2;
	j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (mat[j][i + 1] < mat[j][i])
			{
				cont++;
			}
			else if (mat[j][i + 1] < mat[j][i + 2])
			{
				cont++;
			}
		}
	}

	return 0;
}
