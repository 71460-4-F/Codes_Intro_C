#include <stdio.h>
int main()
{

   int valor1, valor2, valor3, produto;

   printf("digite o valor do produto: ");
   scanf("%d", &produto);
   printf("digite o primeiro chute:");
   scanf("%d", &valor1);
   printf("digite o segundo chute:");
   scanf("%d", &valor2);
   printf("digite o terceiro chute:");
   scanf("%d", &valor3);

   int diferenca1 = valor1 - produto;
   int diferenca2 = valor2 - produto;
   int diferenca3 = valor3 - produto;

   if (diferenca1 < 0)
   {

      diferenca1 = diferenca1 * -1;
   }
   if (diferenca2 < 0)
   {

      diferenca2 = diferenca2 * -1;
   }
   if (diferenca3 < 0)
   {

      diferenca3 = diferenca3 * -1;
   }
   if ((valor1 == valor2) || (valor2 == valor3) || (valor3 == valor1))
   {
      printf("invalido\n");
   }
   else if (diferenca1 > diferenca2)
   {
      printf("Segundo\n");
   }
   else if (diferenca2 > diferenca1)
   {
      printf("Primeiro\n");
   }

   else if (diferenca2 > diferenca3 && diferenca1 > 3)
   {
      printf("terceiro\n");
   }
   else
   {
      printf("empate\n");
   }
   return 0;
}
