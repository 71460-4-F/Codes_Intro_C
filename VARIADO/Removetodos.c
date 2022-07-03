#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int *V;
    int f;   // índice do último elemento
    int tam; // tamanho: tamanho máximo da lista
} ListaSeq;

ListaSeq criarLista(int tam)
{
    ListaSeq L;
    L.V = (int *)malloc(tam * sizeof(int));
    L.f = -1;
    L.tam = tam;
    return L;
}

ListaSeq incluir(ListaSeq L, int x)
{
    if ((L.f) + 1 < L.tam)
    {
        (L.f)++;
        L.V[L.f] = x;
    }
    else
        printf("Lista cheia! Elemento NÃO incluído!\n");
    return L;
}

int RemoveTodos(ListaSeq L, int x)
{
    for (i = 0; i < (L.f) + 1; i++)
    {
        if (L.V[i] == x)
        {
            L.V[i] = L.V[L.f];
            (L.f)--;
            return 1;
        }
    }
    return 0;
}
