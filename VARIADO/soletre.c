#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char frase[50], separado[100];
	int i = 0, j = 0, tam = 0;

	scanf(" %[^\n]", frase);
	tam = strlen(frase);
	for (i = 0; i < tam; i++)
	{
		separado[j] = frase[i];
		j++;
		separado[j] = '-';
		j++;
	}
	separado[j - 1] = '\0';
	printf("%s \n", separado);
}
