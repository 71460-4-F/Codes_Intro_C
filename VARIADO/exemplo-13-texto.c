#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

	/* EXEMPLOS de declaração de cadeia de caracteres (string)
	 * */

	// no exemplo abaixo, o vetor de 'char' é criado com a quantidade
	// exata de elementos necessários para guardar o texto
	char texto[] = "Meu primeiro texto";
	printf("O texto '%s' possui tamanho %ld\n", texto, strlen(texto));

	// no exemplo abaixo, o vetor de 'char' é criado com uma quantidade
	// pré-determinada, e depois o texto é copiado
	char texto2[18];
	strcpy(texto2, "Meu segundo texto");
	printf("O texto '%s' possui tamanho %ld\n", texto2, strlen(texto2));

	// no exemplo abaixo, o vetor de 'char' é alocado dinamicamente
	// e depois o texto é copiado
	char *texto3;
	texto3 = (char *)malloc(30 * sizeof(char));
	strcpy(texto3, "Esse terceiro texto");
	printf("O texto '%s' possui tamanho %ld\n", texto3, strlen(texto3));
	free(texto3);

	// no exemplo abaixo, o vetor de 'char' recebe o texto do usuário
	char texto4[30];
	gets(texto4);
	printf("O texto '%s' possui tamanho %ld\n", texto4, strlen(texto4));

	return 0;
}
