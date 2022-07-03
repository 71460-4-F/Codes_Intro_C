#include <stdio.h>

int main(void)
{

    int contador = 0, numeros = 0;

    while (-1)
    {
        printf("Digite algum número: \n");
        scanf("%d", &numeros);
        if (numeros >= 0)
        {
            printf("Contador: %d \n", numeros);
            contador = contador + 1;
        }
        else
        {
            printf("Vlw Flw \n");
            break;
        }
    }
}
