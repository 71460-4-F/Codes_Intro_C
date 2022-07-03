#include <stdio.h>
#include <stdlib.h>

int cont(int a)
{
    printf("%d \n", a);
    return a += 1;
}

void imprimirValor(int a)
{
    printf("valor:%d ", a);
}

int main(void)
{
    int i = 0;
    int a = 0;
    for (i = 0; i < 10; i++)
    {
        a = cont(a);
    }
    imprimirValor(a);
    return 0;
}
