#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int mat[5][5];
	int i = 0, j = 0;
	int soma_p = 0, soma_s = 0, result = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	for (i = 0; i < 5; i++)
	{
		soma_p += mat[i][i];
		soma_s += mat[i][4 - i];
	}
	result = soma_s - soma_p;
	printf("%d\n", result);

	return 0;
}
