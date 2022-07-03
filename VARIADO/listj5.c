// Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras da frase
// digitada.

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[30];
    int cont = 0, i;

    printf("Digite uma frase: ");
    gets(frase);
    __fpurge(stdin);
    int j = strlen(frase);

    for (i = 0; i < j; i++)
    {

        if (frase[i] == ' ')
        {
            cont++;
        }
    }

    printf("Existem %d palavras na frase ", cont + 1);

    return 0;
}
