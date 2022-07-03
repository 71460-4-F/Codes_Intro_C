#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char frase[101], gagueira[201], test[50];
	int tam = 0, tam2 = 0;
	int i = 0, j = 0, k = 0, l = 0, x = 0;

	scanf(" %[^\n]", frase);
	tam = strlen(frase);

	for (i = 0; i < tam; i++, j++, k++)
	{
		if (frase[j] != ' ')
		{
			gagueira[i] = frase[j];
		}
		else if (frase[j] == ' ')
		{
			gagueira[i] = 'x';
			tam2 = strlen(gagueira);
			x = tam2;
			printf("valor de j = %d", j);
			for (l = 0; l < tam2; l++)
			{
				gagueira[x] = frase[l];
				printf("valor de gagueira %c\n", gagueira[x]);
				x++;
				test[l] = frase[l];
			}
		}
	}

	printf("tam2 = %d  x = %d\n", tam2, x);
	printf("posicao %c\n", frase[0]);

	printf("gagueira = %s", gagueira);
	puts(frase);
	puts(test);

	return 0;
}
