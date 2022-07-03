#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char frase[200], vogais[50], consoantes[50];
	int i = 0, j = 0, k = 0, tam = 0;

	scanf(" %[^\n]", frase);
	tam = strlen(frase);
	for (i = 0; i < tam; i++)
	{
		if (((frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'i') || (frase[i] == 'o') || (frase[i] == 'u')) && ((frase[i] != ' ')))
		{
			vogais[j] = frase[i];
			j++;
		}
		else
		{
			if (frase[i] != ' ')
			{
				consoantes[k] = frase[i];
				k++;
			}
		}
	}
	vogais[j] = '\0';
	consoantes[k] = '\0';
	printf("%s \n", vogais);
	printf("%s \n", consoantes);

	return 0;
}
