#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int tamv = 0;
	int i = 0, j = 0;

	scanf("%d", &tamv);
	char frase[tamv];
	char frase2[tamv];

	getchar();
	scanf(" %[^\n]", frase);
	while (frase[i] != '\0')
	{
		frase2[j] = frase[i];

		if (frase[i] == 't')
		{
			frase2[j] = 'p';
			i++;
			j++;
		}
		else if (frase[i] == 'e')
		{
			frase2[j] = 'o';
			i++;
			j++;
		}
		else if (frase[i] == 'n')
		{
			frase2[j] = 'l';
			i++;
			j++;
		}
		else if (frase[i] == 'i')
		{
			frase2[j] = 'a';
			i++;
			j++;
		}
		else if (frase[i] == 's')
		{
			frase2[j] = 'r';
			i++;
			j++;
		}
		else if (frase[i] == 'p')
		{
			frase2[j] = 't';
			i++;
			j++;
		}
		else if (frase[i] == 'o')
		{
			frase2[j] = 'e';
			i++;
			j++;
		}
		else if (frase[i] == 'l')
		{
			frase2[j] = 'n';
			i++;
			j++;
		}
		else if (frase[i] == 'a')
		{
			frase2[j] = 'i';
			i++;
			j++;
		}
		else if (frase[i] == 'r')
		{
			frase2[j] = 's';
			i++;
			j++;
		}

		else
		{
			frase2[j] = frase[i];
			j++;
			i++;
		}
	}
	frase2[j] = '\0';
	printf("%s", frase2);

	return 0;
}
