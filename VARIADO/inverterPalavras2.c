#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char frase[201];
	char inver[201];
	// char result[401];
	int i = 0, j = 0;
	int tam = 0, ini = 0, cont = 0;

	scanf(" %[^\n]", frase);
	tam = strlen(frase);
	for (i = 0; i < tam; i++)
	{
		if (frase[i] != ' ')
		{
			inver[tam--] = frase[i];
		}
		i++;
		if (frase[i] = ' ')
		{
			inver[tam--] = frase[i];
		}
	}
	puts(inver);
	puts(frase);

	return 0;
}
