#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{

     int conta[4], i, c, j;
     float saldo[4];

     for (c = 0; c <= 4; c++)
     {
          for (i = c; i <= c; i++)
          {

               printf("Digite o Codigo da conta: ");
               scanf("%d", &conta[i]);

               for (j = c; j <= c; j++)
               {

                    printf("Digite o saldo da conta: ");
                    scanf("%d", &saldo[j]);
               }
          }
     }
     for (i = 0; i <= 4; i++)
     {

          printf("conta: %d - saldo: %d\n", conta[i], saldo[j]);
     }

     system("pause");
}

int main()
{
     int vet[9], i, j, cod;

     for (i = 0; i < 10; i++)
     {

          printf("Informe o numero : \n");
          scanf("%d", &vet[i]);
     }

     for (i = 0; i < 10; i++)
     {

          printf("%d|", vet[i]);
     }

     printf("\n");

     printf("\t\tINFORMACOES\n\n0 - Finaliza o Programa\n1 - VETOR EM ORDEM CRESCENTE\n2 - DECRESCENTE\n");

     printf("Informe o codigo: ");
     scanf("%d", &cod);

     switch (cod)
     {

     case 0:

          printf("Codigo Finalizado!\n");
          break;

     case 1:
          for (i = 0; i <= 9; i++)
          {
               for (j = i + 1; j <= 9; j++)
               {
                    if (vet[i] > vet[j])
                    {
                         int aux;
                         aux = vet[i];
                         vet[i] = vet[j];
                         vet[j] = aux;
                    }
               }
          }
          for (i = 0; i <= 9; i++)
          {
               printf("%d ", vet[i]);
          }
          printf("\n");
          break;

     case 2:
          for (i = 0; i <= 9; i++)
          {
               for (j = i + 1; j <= 9; j++)
               {
                    if (vet[i] < vet[j])
                    {
                         int aux;
                         aux = vet[i];
                         vet[i] = vet[j];
                         vet[j] = aux;
                    }
               }
          }
          for (i = 0; i <= 9; i++)
          {
               printf("%d ", vet[i]);
          }
          printf("\n");
          break;

     default:
          printf("Op��o Incorreta!");
          break;
     }

     system("pause");
}
