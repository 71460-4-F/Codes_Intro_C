#include <stdio.h>

int main(void)
{

    int contador = 0, numeros = 0, QtdNumeros = 0;
    printf("Digite quantas vezes os números vão ser lidos \n");
    scanf("%d", &QtdNumeros);

    while (contador < QtdNumeros)
    {
        printf("Digite algum número: \n");
        scanf("%d", &numeros);
        if (numeros > 15 || numeros < 0)
        {
            printf("Valor inválido \n Digite novamente: \n");
            scanf("%d", &numeros);
        }
        else
        {
            printf("Contador: %d \n", numeros);
            contador = contador + 1;
        }
    }
}
