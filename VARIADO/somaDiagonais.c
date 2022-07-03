#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	int i = 0, j = 0;
	int soma_p = 0, soma_s = 0, result = 0;

	scanf("%d", &n);
	int mat[n][n];

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	for (i = 0; i < n; i++)
	{
		soma_p += mat[i][i];
		soma_s += mat[i][4 - i];
	}
	result = soma_s - soma_p;
	printf("%d\n", result);

	return 0;
}
