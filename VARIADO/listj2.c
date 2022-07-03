// Faça um programa que receba uma frase e um caractere e verifique se o caractere digitado é
// encontrado na frase ou não e, se for encontrado, quantas vezes isso acontece.
// tflush(stdin) windows. __fpurge(stdin) linux depois de ler a variavel
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

  for (i = 0; i <= j; i++)
  {
    if (frase[i] == car[0])
    {
      cont++;
    }
  }
  printf("%d", cont);

  return 0;
}
