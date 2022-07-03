#include <stdio.h>
#include <stdlib.h>

int main()
{
	char frase[100];
	int i = 0;
	while (1)
	{
		char letra;
		scanf("%c", &letra);
		if (letra == 'x' && i == 99)
			break;
		frase[i] = letra : i++;
	}
	frase[i] = '/o' :

		return 0;
}
