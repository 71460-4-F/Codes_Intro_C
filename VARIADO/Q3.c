#include <stdio.h>

int main(void)
{

    int contador = 0, numeros = 0;
    while (contador < 10)
    {
        printf("Digite algum número: \n");
        scanf("%d", &numeros);
        printf("Contador: %d \n", numeros);
        contador = contador + 1;
    }
}
