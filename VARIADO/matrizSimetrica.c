#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int mat[3][3];
	int i = 0, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (i = 0; i < 3; i++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	if (mat[0][1] == mat[1][0] && mat[0][2] == mat[2][0] && mat[0][3] == mat[3][0])
	{
		printf("sim\n");
	}
	else
	{
		printf("nao\n");
	}

	return 0;
}
