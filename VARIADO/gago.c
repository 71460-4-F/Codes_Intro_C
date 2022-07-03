#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char frase[101], gago[201];
	int tam = 0, tam2 = 0;
	int i = 0, j = 0, k = 0, l = 0, cont = 0;

	scanf(" %[^\n]", frase);
	tam = strlen(frase);
	while (gago[i] != '\0')
	{
		while (frase[i] != ' ' && frase[i] != '\0')
		{
			gago[i] = frase[i];
			i++;
		}
		if (frase[i] == ' ')
		{
			gago[i] = '-';
			i++;
		}
		if (frase[i] == '\0')
		{
			tam = strlen(gago);
			gago[i] = '-';
			i++;
			for (cont = 0; cont < tam; cont++)
			{
				gago[i++] = gago[cont];
			}
			cont = 0;
		}
	}

	printf("gago 2 = %s\n", gago);
	return 0;
}
