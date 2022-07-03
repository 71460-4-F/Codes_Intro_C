#include <stdio.h>
#include <stdlib.h>

int cont(int indice)
{
    return indice += 1;
}

void imprimirValor(int indice)
{
    printf("valor:%d ", indice);
}

int main(void)
{
    int i = 0;
    int indice = 0;
    for (i = 0; i < 10; i++)
    {
        indice = cont(indice);
    }
    imprimirValor(indice);
    return 0;
}
