#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int frase[201];
	int result[201];

	scanf(" %[^\n]", frase);
	int ini = 0, i, j, k;
	int tam = strlen(frase);
	for (i = 0; i < tam; i++)
	{
		if (frase[i] == ' ')
		{
			for (j = i - 1; j >= ini; j--)
			{
				result[k] = frase[j];
				k++;
			}
			result[k] = ' ';
			k++;
			ini = i + 1;
		}
	}
	result[k] = '\0';
	printf("%s", result);
}
