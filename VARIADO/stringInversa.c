#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase1[100];
    char frase2[100];
    int i = 0;
    int tam = 0; // tamanho da frase com \0

    scanf(" %[^\n]", frase1);
    for (i = 0; frase1[i] != '\0'; i++)
    {
        tam++;
    }
    for (i = 0; i < tam; i++)
    {
        frase2[tam - i - 1] = frase1[i];
    }
    frase2[tam] = '\0';

    printf("%s \n", frase1);
    printf("%s \n", frase2);

    return 0;
}
