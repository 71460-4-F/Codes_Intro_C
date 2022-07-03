#include <stdio.h>
#include <stdlib.h>

#define tam 4

int main()
{
    float matriz1[tam][tam]; // Matriz valorada pelo Usuario
    float matriz2[tam][tam];
    int i, j;

    printf("Insira os elementos da Matriz 1.\n ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Matriz1[%d][%d] = ", i, j);
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("\nMatriz 1\n\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%0.2f ", matriz1[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz2[j][i] = matriz1[i][j];
        }
    }

    printf("\nMatriz INVERTIDA\n\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%0.2f ", matriz2[i][j]);
        }
        printf("\n");
    }

    getch();
}
