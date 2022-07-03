#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	int i;
	int soma = 0;
	int vezes;
	int j = 1;

	scanf("%d", &vezes);
	setbuf(stdin, NULL);
	do
	{
		char frase[200];
		gets(frase);
		for (i = 0; i < strlen(frase); i++)
		{

			if (frase[i] == '1')
			{
				soma += 2;
			}

			if (frase[i] == '2' || frase[i] == '5' || frase[i] == '3')
			{
				soma += 5;
			}

			if (frase[i] == '9' || frase[i] == '6' || frase[i] == '0')
			{
				soma += 6;
			}

			if (frase[i] == '4')
			{
				soma += 4;
			}

			if (frase[i] == '7')
			{
				soma += 3;
			}

			if (frase[i] == '8')
			{
				soma += 7;
			}

			printf("%d\n", soma);
			j++;
			soma = 0;
		}

	} while (j <= vezes);

	return 0;
}
