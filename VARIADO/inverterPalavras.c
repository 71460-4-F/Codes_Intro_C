#include <stdio.h>
#include <string.h>

int main()
{
	char frase[101];
	char gagueira[202];
	int cursorDestino = 0;
	int cursorInicio = 0, cursorFinal = 0;

	scanf(" %[^\n]", frase);
	int tamanhoFrase = strlen(frase);
	while (cursorInicio < tamanhoFrase)
	{
		cursorFinal = cursorInicio + 1;
		while (frase[cursorFinal] != ' ' && frase[cursorFinal] != '\0')
		{
			cursorFinal++;
		}
		int i = cursorInicio;
		while (i < cursorFinal)
		{
			gagueira[cursorDestino] = frase[i];
			cursorDestino++;
			i++;
		}
		gagueira[cursorDestino] = ' ';
		cursorDestino++;
		i = cursorInicio;
		while (i < cursorFinal)
		{
			gagueira[cursorDestino] = frase[i];
			cursorDestino++;
			i++;
		}
		gagueira[cursorDestino] = frase[cursorFinal];
		cursorDestino++;
		cursorInicio = cursorFinal + 1;
	}
	printf("%s", gagueira);
}
