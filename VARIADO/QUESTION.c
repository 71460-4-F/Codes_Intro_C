#include <stdio.h>

int main()
{
	int mat[3][3];

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	int mc[3];
	mc[0] = (mat[0][0] + mat[1][0] + mat[2][0]) / 3;
	mc[1] = (mat[0][1] + mat[1][1] + mat[2][1]) / 3;
	mc[2] = (mat[0][2] + mat[1][2] + mat[2][2]) / 3;

	int ml[3];
	ml[0] = (mat[0][0] + mat[0][1] + mat[0][2]) / 3;
	ml[1] = (mat[1][0] + mat[1][1] + mat[1][2]) / 3;
	ml[2] = (mat[2][0] + mat[2][1] + mat[2][2]) / 3;

	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("media linha [%d] = %d ", i, ml[i]);
	}
	printf("\n");
	for (j = 0; j < 3; j++)
	{
		printf("media coluna [%d] = %d ", j, mc[j]);
	}

	return (0);
}
