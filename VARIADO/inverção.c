#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char frase1[200], frase2[200], frase3[400];
	int tam = 0, i = 0;

	scanf(" %[^\n]", frase1);
	scanf(" %[^\n]", frase2);
	for (i = 0; frase[i] != '\0'; i++)
	{
		tam++;
	}
	for (i = 0; i < tam; i++)
	{
		frase2[i] = frase1[tam--];
	}

	return 0;
}
