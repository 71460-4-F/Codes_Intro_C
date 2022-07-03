#include <stdio.h>
int main()
{
  int a, b, c, d, e;
  int aux1;

  printf("\n\t\t\tMAIOR NUMERO ENTRE 5 DIGITADOS--->a,b,c,d,e");
  printf("\n\n\nDigite o valor de a: ");
  scanf("%d", &a);
  printf("\nDigite o valor de b: ");
  scanf("%d", &b);
  printf("\nDigite o valor de c: ");
  scanf("%d", &c);
  printf("\nDigite o valor de d: ");
  scanf("%d", &d);
  printf("\nDigite o valor de e: ");
  scanf("%d", &e);
  if (a > b)
    aux1 = a;
  else
    aux1 = b;
  if (aux1 > c)
    aux1 = aux1;
  else
    aux1 = c;
  if (aux1 > d)
    aux1 = aux1;
  else
    aux1 = d;
  if (aux1 > e)
    aux1 = aux1;
  else
    aux1 = e;
  printf("\n\n\tO Maior numero digitado foi: %d", aux1);
}
