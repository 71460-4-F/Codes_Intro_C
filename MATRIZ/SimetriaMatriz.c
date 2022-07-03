#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int matriz[3][3];
	int c = 0, i = 0;
	int cont = 0;

	for (c = 0; c < 3; c++)
	{
		for (i = 0; i < 3; i++)
		{
			scanf("%d", &matriz[c][i]);
		}
	}

	for (c = 0; c < 3; c++)
	{
		for (i = c + 1; i < 3; i++)
		{
			if (matriz[c][i] == matriz[i][c])
			{
				cont++;
			}
		}
	}

	return 0;
}
