// Faça um programa que receba uma frase e um caractere e verifique em que posição da frase o
// caractere digitado aparece pela primeira vez.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  char frase[30], car[2];
  int cont = 0, i;

  printf("Escreva uma frase: ");
  gets(frase);

  printf("Digite o caractere: ");
  gets(car);

  int j = strlen(frase); // conta a quantidade de letra e o for vai ate a quantidade de letras com j
  int pos = 0;
  for (i = 0; i <= j; i++)
  {
    if (frase[i] == car[0])
    {
      cont++;
      pos = i;
      printf("%d", pos);
      break;
    }
  }

  return 0;
}
