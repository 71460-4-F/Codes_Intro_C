#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

  int i;
  char texto[50];

  gets(texto);
  for (i = 0; i < strlen(texto); i++)
  {

    if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' || texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
    {
      texto[i] = 'v';
    }
    else if (texto[i] == ' ')
    {
      texto[i] = ' ';
    }

    else if (texto[i] != ' ')
    {
      texto[i] = 'c';
    }
  }

  printf("%s", texto);

  return 0;
}
