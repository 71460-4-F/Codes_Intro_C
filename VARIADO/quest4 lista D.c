#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int i, menor = 0, maior = 0, quant, numero;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a quntidade de numeros\n");
    scanf("%d", &quant);

    for (i = 1; i <= quant; i++)
    {
        printf("Digite o %d n�mero\n", i);
        scanf("%d", &numero);
    }
    if (numero > maior)
    {
        maior = numero;
    }
    if (numero < menor)
    {
        menor = numero;
    }

    printf("O maior numero � %d e o menor � %d\n\n", maior, menor);
    return 0;
}
