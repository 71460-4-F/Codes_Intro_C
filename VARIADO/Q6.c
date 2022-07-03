#include <stdio.h>
int main(void)
{

    int valor1, cont = 0, par = 0, impar = 0, QtdNumeros = 0;

    printf("Digite quantas vezes os números vão ser lidos \n");
    scanf("%d", &QtdNumeros);

    while (cont < QtdNumeros)
    {
        printf("Digite o valor \n");
        scanf("%d", &valor1);

        if (valor1 % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
        cont++;
        printf("\n");
    }

    printf("Tem %d par(s) e \n%d impar(s)\n", par, impar);
    return 0;
}
