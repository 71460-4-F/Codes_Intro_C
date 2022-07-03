#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char frase1[200], frase2[200], frase3[400];
	int tam1 = 0, tam2 = 0, tam3 = 0, i = 0, j = 0;

	scanf(" %[^\n]", frase1);
	scanf(" %[^\n]", frase2);
	for (i = 0; (frase1[i] != '\0'); i++)
	{
		tam1++;
	}
	for (i = 0; (frase1[i] != '\0'); i++)
	{
		tam2++;
	}
	tam3 = (tam1 - 1) + (tam2 - 1);
	for (i = 0; i < tam1; i++)
	{
		frase3[i] = frase1[i];
	}
	frase3[tam1 + 1] = 'z';
	for (i = 0; i < tam2; i++)
	{
		frase3[tam1++] = frase2[i];
	}

	puts(frase3);
}
