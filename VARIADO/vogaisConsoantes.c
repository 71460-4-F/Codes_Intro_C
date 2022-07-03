#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char frase[200], vogais[50], consoantes[50];
	int i = 0;

	scanf(" %[^\n]", frase);
	for (i = 0; frase[i] != '\0'; i++)
	{
		if (((frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'i') || (frase[i] == 'o') || (frase[i] == 'u')) && ((frase[i] != ' ')))
		{
			vogais[i] = frase[i];
		}
		else
		{
			if (((frase[i] != 'a') || (frase[i] != 'e') || (frase[i] != 'i') || (frase[i] != 'o') || (frase[i] != 'u')) && ((frase[i] != ' ')))
			{
				consoantes[i] = frase[i];
			}
		}
	}
	printf("%s \n", vogais);
	printf("%s \n", consoantes);

	return 0;
}
