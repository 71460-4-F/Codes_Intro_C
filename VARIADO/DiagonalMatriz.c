#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int matriz[5][5];
	int somaDPri = 0, somaDSec = 0;
	int resul = 0;
	int c = 0;
	int i = 0;

	for (c = 0; c < 5; c++)
	{
		for (i = 0; i < 5; i++)
		{
			scanf("%d", &matriz[c][i]);
		}
	}

	for (c = 0; c < 5; c++)
	{
		for (i = 0; i < 5; i++)
		{

			if (c == i)
			{
				somaDPri = somaDPri + matriz[c][i];
			}

			if (c == 5 - 1 - i)
			{
				somaDSec = somaDSec + matriz[c][i];
			}
		}
	}

	resul = somaDPri - somaDSec;

	printf("%d", resul);

	return 0;
}
