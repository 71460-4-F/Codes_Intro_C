#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int tam = 0, i = 0, j = 0;
	char carac;

	scanf("%d", &tam);
	scanf(" %c", &carac);

	for (i = 0; i < tam; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c", carac);
		}
		printf("\n");
	}
}
