#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int mat[3][3];
	int i, j;
	int v;
	int linha[3], coluna[3], dp, ds;

	for (i = 0; i < 3; i++)
	{
		linha[i] = 0;
		coluna[i] = 0;

		for (j = 0; j < 3; j++)
		{
			linha[i] += mat[i][j];
			coluna[i] += mat[j][i];

			if (i == j)
			{
				dp += mat[i][j];
			}
		}
	}
	ds = mat[0][2] + mat[1][1] + mat[2][0];

	for (i = 0; i < 3; i++)
	{
		if (linha[i] != coluna[i])
		{
			v = 0;
			if (linha[i] != ds || linha[i] != dp || coluna[i] != ds || coluna[i] != dp)
				;
			v = 0;
		}
	}

	if (v == 1)
	{
		printf("\nA MATRIZ E UM QUADRADO MAGICO");
	}
	else
	{
		printf("\nA MATRIZ NAO E UM QUADRADO MAGICO");
	}

	getch();
	return 0;
}
