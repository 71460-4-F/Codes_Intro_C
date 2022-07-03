
#include <stdio.h>

int main()
{

    int numero, i, controle = 0, j, primo = 0;

    for (j = 1; j <= 5; j++)
    {
        printf("Informe o %d numero\n", j);
        scanf("%d", &numero);
    }
    if (numero > 1)
    {

        for (i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
                controle++;
        }
        if (controle == 2)
        {
            printf("O numero %d e um numero primo!\n", numero);
        }
        else
        {
            printf("O numero %d nao e um numero primo!\n", numero);
        }
    }
    printf("Existem %d n�meros primos", controle);
    return 0;
}
