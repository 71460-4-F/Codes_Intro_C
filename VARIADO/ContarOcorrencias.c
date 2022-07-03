#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char frase1[200], letra[2];
	int tem = 0, i = 0;

	scanf(" %[^\n]", frase1);
	scanf("%s", letra);
	for (i = 0; frase1[i] != '\0'; i++)
	{
		if (frase1[i] == letra[0])
		{
			tem++;
		}
	}
	printf("%d", tem);

	return 0;
}
