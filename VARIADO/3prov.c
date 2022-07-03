#include <stdio.h>
#include <stdlib.h>

int main()
{

    int conta[4], i, c, j;
    float saldo[4];

    for (i = 0; i <= 4; i++)
    {

        printf("Digite o Codigo da conta: ");
        scanf("%d", &conta[i]);

        printf("Digite o saldo da conta: ");
        scanf("%f", &saldo[i]);
    }
    for (i = 0; i <= 4; i++)
    {

        printf("conta: %d - saldo: %.2f\n", conta[i], saldo[i]);
    }

    system("pause");
}
