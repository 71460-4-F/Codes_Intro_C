#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char frase1[100], frase2[100], frase3[300];
	int tam1 = 0, tam2 = 0, i = 0;

	scanf(" %[^\n]", frase1);
	scanf(" %[^\n]", frase2);
	for (i = 0; frase1[i] != '\0'; i++)
	{ // saber o tamanho de frase1
		tam1++;
	}
	for (i = 0; frase2[i] != '\0'; i++)
	{ // saber o tamanho de frase2
		tam2++;
	}
	for (i = 0; frase1[i] != '\0'; i++)
	{ // adicionando frase1 em frase3
		frase3[i] = frase1[i];
	}
	for (i = 0; frase2[i] != '\0'; i++)
	{ // adicionando frase2 em frase3
		frase3[tam1++] = frase2[i];
	}
	puts(frase3);

	return 0;
}
// 020471ra.
