#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int primo = 0, numero, cont = 0, i, j, quant = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Quantos n�meros voc� quer testar?");
    scanf("%d", &quant);

    for (i = 1; i <= quant; i++)
    {
        printf("Digite o %d n�mero\n", i);
        scanf("%d", &numero);
        cont = 0;
        for (j = 1; j <= numero; j++)
        {
            if (numero % j == 0)
            {
                cont++;
            }
        }

        if (cont == 2)
        {
            printf("O numero � primo\n\n");
            primo++;
        }
        else
        {
            printf("O n�mero n�o � primo\n\n");
        }
    }
    printf("Existem %d n�meros primos\n", primo);
    return 0;
}
