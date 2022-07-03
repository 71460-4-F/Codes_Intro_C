#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

	int cont = 0;
	char frase[100];
	char substring[100];

	scanf(" %[^\n]s", frase);
	scanf(" %[^\n]s", substring);

	char *resultado = strstr(frase, substring);

	if (resultado == NULL)
	{
		printf("A substring nao foi encontrada");
	}

	else
	{
		cont++;
	}

	printf("%d", cont);

	return 0;
}
