#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char frase[101], gago[201], test[50];
	int tam = 0, tam2 = 0;
	int i = 0, j = 0, k = 0, l = 0, x = 0;

	scanf(" %[^\n]", frase);
	tam = strlen(frase);
	while (gago[j] != '\0')
	{
		for (j = 0; j < tam + 1; j++, i++)
		{
			if (frase[i] != ' ' && frase[j] != '\0')
			{
				gago[j] = frase[j];

				if (frase[i] == ' ')
				{
					gago[j] = '-';
					j++;
					tam2 = strlen(gago);
					for (k = 0; k < tam2; k++)
					{
						gago[j++] = gago[k];
					}
				}
			}

			else if (frase[j] == '\0')
			{
				gago[j] = '-';
				j++;
				tam2 = strlen(gago) - 1;
				for (k = 0; k < tam2; k++)
				{
					gago[j++] = gago[k];
				}
				// k --;
			}
		}
	}

	printf("gago 2 = %s\n", gago);
	return 0;
}
