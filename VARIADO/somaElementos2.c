#include <stdio.h>
#include <stdlib.h>

int main()
{

	int soma = 0, i = 0, j = 0;
	int m = 0, n = 0;

	scanf("%d", &n);
	scanf("%d", &m);
	int mat[n][m];

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &mat[i][j]);
			soma += mat[i][j];
		}
	}
	printf("%d \n", soma);

	return 0;
}
