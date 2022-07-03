#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char frase[200], letra[100];
	int i = 0, j = 0, tam = 0;

	scanf(" %[^\n]", frase);
	tam = strlen(frase);
	for (i = 0; i < tam; i++)
	{
		if (((frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'i') || (frase[i] == 'o') || (frase[i] == 'u')))
		{
			letra[j] = 'v';
		}
		else
		{
			if (frase[i] == ' ')
			{
				letra[j] = ' ';
			}
			else
			{
				letra[j] = 'c';
			}
		}
		j++;
	}
	letra[j] = '\0';
	printf("%s \n", letra);

	return 0;
}
