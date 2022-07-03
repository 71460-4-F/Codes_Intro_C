#include <stdio.h>
#include <string.h>

int main()
{
	// declaração de variáveis
	char frase[101];		// 100 letras + \0
	char fraseDestino[202]; // 201 letras + \0
	int cursorDestino = 0;
	int cursorInicio = 0, cursorFinal = 0;
	// zerando a memoria da frase de destino
	memset(fraseDestino, 0, sizeof(fraseDestino));
	// entrada com a frase
	gets(frase);
	int tamanhoFrase = strlen(frase);
	// duplicar as palavras
	while (cursorInicio < tamanhoFrase)
	{
		// ler até o prox espaço OU \0
		cursorFinal = cursorInicio + 1;
		while (frase[cursorFinal] != ' ' &&
			   frase[cursorFinal] != '\0')
		{
			cursorFinal++;
		}
		// duplicar a palavra no destino
		int i = cursorInicio;
		// primeira copia
		while (i < cursorFinal)
		{
			fraseDestino[cursorDestino] = frase[i];
			cursorDestino++;
			i++;
		}
		// espaço
		fraseDestino[cursorDestino] = ' ';
		cursorDestino++;
		// segunda copia
		i = cursorInicio;
		while (i < cursorFinal)
		{
			fraseDestino[cursorDestino] = frase[i];
			cursorDestino++;
			i++;
		}
		// espaço ou \0
		fraseDestino[cursorDestino] = frase[cursorFinal];
		cursorDestino++;
		// atualizar cursor Inicio
		cursorInicio = cursorFinal + 1;
	}

	// saída com a frase transformada
	printf("%s", fraseDestino);
}
