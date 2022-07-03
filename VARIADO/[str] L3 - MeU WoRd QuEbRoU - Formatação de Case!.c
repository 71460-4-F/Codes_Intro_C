#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

	int i, posicao[100], j = 0;
	char texto[100], carac;

	gets(texto);
	carac = getc(stdin);

	if (carac == 'M')
	{
		for (i = 0; i < strlen(texto); i++)
		{
			texto[i] = toupper(texto[i]);
		}
		printf("%s", texto);
	}
	if (carac == 'm')
	{
		for (i = 0; i < strlen(texto); i++)
		{
			texto[i] = tolower(texto[i]);
		}
		printf("%s", texto);
	}
	if (carac == 'i')
	{
		for (i = 0; i < strlen(texto); i++)
		{
			if (islower(texto[i]))
			{
				texto[i] = toupper(texto[i]);
			}
			else if (isupper(texto[i]))
			{
				texto[i] = tolower(texto[i]);
			}
		}
		printf("%s", texto);
	}
	if (carac == 'p')
	{
		for (i = 0; i < strlen(texto); i++)
		{
			if (texto[i] == " ")
			{
				posicao[j] = i;
				texto[j + 1] == toupper(texto[j + 1]);
				j++;
			}
		}
		printf("%s", texto);
	}

	return 0;
}
