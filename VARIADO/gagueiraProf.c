#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char frase[201];
	scanf(" %[^\n]", frase);
	char result[401];
	int ini = 0, i = 0, j = 0;
	int tam = strlen(frase);

	for (i = 0; i < tam; i++)
	{
		if (frase[i] != ' ')
		{
			result[j] = frase[i];
			j++;
		}
		else
		{
			result[j] = frase[i];
			j++;
			while (ini < i)
			{
				result[j] = frase[ini];
				j++;
				ini++;
			}
			ini++;
		}
	}

	result[j] = '\0';
	printf("%s", result);

	return 0;
}
