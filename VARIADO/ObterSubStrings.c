#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char frase[100], sub[50];
	int i = 0;
	int indice = 0, qtd = 0;

	scanf(" %[^\n]", frase);
	scanf("%d", &indice);
	scanf("%d", &qtd);
	for (i = 0; i < qtd; i++)
	{
		sub[i] = frase[indice];
		indice++;
	}
	sub[i] = '\0';
	printf("%s \n", sub);
}
