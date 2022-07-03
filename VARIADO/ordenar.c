#include <stdlib.h>
#include <stdio.h>
#define MAX 10

int vet[MAX];
int i = 0;
int j = 0;
int aux = 0;

for (i = 0; i < MAX; i++)
{
  scanf("%d", &aux);
  vet[i] = aux;
}

for (i = 0; i < MAX; i++)
{
  for (j = i + 1; j < MAX; j++)
  {
    if (vet[i] > vet[j])
    {
      aux = vet[j];
      vet[i] = vet[j];
      vet[j] = aux;
    }
  }
}
printf("nn Elementos ordenados (Crescente):");

for (i = 0; i < MAX; i++)
{
  printf("n vetor[%d] = %d", i, vet[i]);
}

for (i = 0; i < MAX; i++)
{
  for (j = i + 1; j < MAX; j++)
  {
    if (vet[j] > vet[i])
    {
      aux = vet[j];
      vet[j] = vet[i];
      vet[i] = aux;
    }
  }
}
printf("nn Elementos ordenados (Decrescente):");

for (i = 0; i < MAX; i++)
{
  printf("n vetor[%d] = %d", i, vet[i]); // exibe o vetor ordenado
}

return 0;
}
