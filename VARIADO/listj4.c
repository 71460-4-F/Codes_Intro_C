// Faça um programa que receba uma frase, calcule e mostre a quantidade de consoantes da
// frase digitada. O programa deverá contar consoantes maiúsculas e minúsculas.

#include <stdio.h>
#include <string.h>
int main()
{

  char frase[30];
  int cont = 0, i;

  printf("Escreva uma frase: \n");
  gets(frase);
  int j = strlen(frase);
  for (i = 0; i < j; i++)
  {
    if (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' || frase[i] == 'U' || frase[i] == ' ')
    {
    }
    else
    {
      cont++;
    }
  }

  printf("Existem %d consoantes na frase.", cont);

  return 0;
}
