#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
   int codigo_estado, peso, codigo_carga;
   float peso_kilos, preco, imposto;
   setlocale(LC_ALL, "Portuguese");

   printf("Digite o c�digo do estado de origem da carga do caminh�o (de 0 a 5)\n");
   scanf("%d", &codigo_estado);
   printf("O peso da carga em Toneladas\n");
   scanf("%d", &peso);
   printf("Digite o c�digo da carga do caminh�o (entre 10 e 40)\n\n");
   scanf("%d", &codigo_carga);

   peso_kilos = peso * 1000;
   printf("O peso em Kilos � %4.f\n", peso_kilos);
   if (codigo_carga >= 10 && codigo_carga <= 20)
   {
      preco = 100 * peso_kilos;
      switch (codigo_estado)
      {
      case 1:
         imposto = preco * 0.35;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 2:
         imposto = preco * 0.25;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 3:
         imposto = preco * 0.15;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 4:
         imposto = preco * 0.05;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 5:

         printf("O pre�o da carga � %4.f\n", preco);
         printf("Imposto Isento\n");
         printf("O valor total transportado � %4.f\n", preco);
         break;
      }
   }
   if (codigo_carga >= 21 && codigo_carga <= 30)
   {
      preco = 250 * peso_kilos;
      switch (codigo_estado)
      {
      case 1:
         imposto = preco * 0.35;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 2:
         imposto = preco * 0.25;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 3:
         imposto = preco * 0.15;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 4:
         imposto = preco * 0.05;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 5:

         printf("O pre�o da carga � %4.f\n", preco);
         printf("Imposto Isento\n");
         printf("O valor total transportado � %4.f\n", preco);
         break;
      }
   }
   if (codigo_carga >= 31 && codigo_carga <= 40)
   {
      preco = 340 * peso_kilos;
      switch (codigo_estado)
      {
      case 1:
         imposto = preco * 0.35;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 2:
         imposto = preco * 0.25;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 3:
         imposto = preco * 0.15;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 4:
         imposto = preco * 0.05;
         printf("O pre�o da carga � %4.f\n", preco);
         printf("O valor do imposto � %4.f\n", imposto);
         printf("O valor total transportado � %4.f\n", preco + imposto);
         break;
      case 5:
         printf("O pre�o da carga � %4.f\n", preco);
         printf("Imposto Isento\n");
         printf("O valor total transportado � %4.f\n", preco);
         break;
      }
   }
}
