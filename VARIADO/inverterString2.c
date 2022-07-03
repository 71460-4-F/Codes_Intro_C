#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char frase1[200], frase2[200];
	int tam = 0, i = 0, j = 0;

	scanf(" %[^\n]", frase1);
	for (i = 0; frase1[i] != '\0'; i++)
	{
		tam++;
	}
	j = tam - 1;
	for (i = 0; i < tam; i++)
	{
		frase2[i] = frase1[j--];
	}
	puts(frase2);

	return 0;
}
