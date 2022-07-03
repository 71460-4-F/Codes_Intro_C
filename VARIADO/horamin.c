#include <stdio.h>
#include <stdlib.h>
int main()
{

    int hora, horaminuto;
    int minutos;

    printf("Digite a hora:\n");
    scanf("%d", &hora);
    printf("Digite os minutos\n");
    scanf("%d", &minutos);

    horaminuto = hora * 60;

    printf("a hora em minutos e: %d", horaminuto + minutos);

    return 0;
}
