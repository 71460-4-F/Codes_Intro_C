#include <stdio.h>
#include <stdlib.h>

void leitura(int *n, int matriz[100][100])
{
      int i, j;
      *n = 3;

      for (i = 0; i < *n; i++)
      {
            for (j = 0; j < *n; j++)
                  scanf("%d", &matriz[i][j]);
      }
}

int diagonalprincipal(int n, int matriz[100][100])
{
      int i, somapri = 0;

      for (i = 0; i < n; i++)
            somapri += matriz[i][i];

      return somapri;
}

int diagonalsecundaria(int n, int matriz[100][100])
{
      int i, j, somasec = 0;

      for (i = 0; i < n; i++)
      {
            for (j = n; j > 1; j--)
                  somasec += matriz[i][j];
      }
      return somasec;
}

int linha(int n, int matriz[100][100], int somadiag)
{
      int i, j = 0, somalin;

      while (j < n)
      {
            somalin = 0;
            for (i = 0; i < n; i++)
                  somalin += matriz[i][j];

            if (somalin == somadiag)
                  j++;
            else
                  return -1;
      }
      return 1;
}

int coluna(int n, int matriz[100][100], int somadiag)
{
      int i = 0, j, somacol;

      while (i < n)
      {
            somacol = 0;
            for (j = 0; j < n; j++)
                  somacol += matriz[i][j];

            if (somacol == somadiag)
                  i++;
            else
                  return -1;
      }
      return 1;
}

int main()
{
      int matriz[100][100], n, somadiag;

      leitura(&n, matriz);
      somadiag = diagonalprincipal(n, matriz);
      if (somadiag == diagonalsecundaria(n, matriz))
      {
            if (linha(n, matriz, somadiag) == 1)
            {
                  if (coluna(n, matriz, somadiag) == 1)
                        printf("é magico!\n");
                  else
                        printf("não é magico!\n");
            }
            else
                  printf("não é magico!\n");
      }
      else
            printf("não é magico!\n");

      system("pause");
      return 0;
}
