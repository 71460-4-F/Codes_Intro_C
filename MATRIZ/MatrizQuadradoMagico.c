#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int linhas, colunas, a;

    printf("Entre com o numero de linhas : ");
    scanf("%i", &linhas);
    printf("Entre com o numero de colunas : ");
    scanf("%i", &colunas);

    int matriz[linhas][colunas];

    int tam_matriz = linhas * colunas;

    for (a = 0; a < tam_matriz; a++)
    {
        printf("Entre com o elemento [%i][%i] da matriz : ",
               ((int)(a / linhas) % colunas) + 1, (a % colunas) + 1);
        scanf("%i", &matriz[(int)(a / linhas) % colunas][a % colunas]);
    }

    for (a = 0; a < tam_matriz; a++)
    {
        if ((a % colunas) == 0)
            printf("(");
        printf(" %i ", matriz[(int)(a / linhas) % colunas][a % colunas]);
        if ((a % colunas) < colunas - 1)
            printf(",");
        else
            printf(") \n");
    }

    int i, j, val = 0, v, qM = TRUE;
    for (j = 0; j < colunas; j++)
        val = val + matriz[0][j];
    i = 1;
    while (qM && i < linhas)
    {
        v = 0;
        for (j = 0; j < colunas; j++)
            v = v + matriz[i][j];
        i = i + 1;
        qM = v == val;
    }
    j = 0;
    while (qM && j < colunas)
    {
        v = 0;
        for (i = 0; i < linhas; i++)
            v = v + matriz[i][j];
        j = j + 1;
        qM = v == val;
    }
    if (qM)
    {
        v = 0;
        for (i = 0; i < linhas; i++)
            v = v + matriz[i][i];
        qM = v == val;
        if (qM)
        {
            v = 0;
            for (i = 0; i < linhas; i++)
                v = v + matriz[i][colunas - i - 1];
            qM = v == val;
        }
    }
    /* FIM ROTINA */

    if (qM)
        printf("\n\nMatriz eh quadrado magico.\n");
    else
        printf("\n\nMatriz nao eh quadrado magico.\n");

    getch();
    return 0;
}
