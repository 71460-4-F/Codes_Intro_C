#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float hora, minutos, h_minutos, h_minutos_convertidos, total_minutos;
    printf("Digite a hora no formato hora,minutos: ");
    scanf("%f", &hora);
    printf("\n");

    h_minutos = (int)hora;
    h_minutos_convertidos = h_minutos * 60;
    minutos = hora - (int)hora;
    printf("\n\n\minutos %f\n\n", minutos);
    printf("A hora de %.2f formatada em minutos �: %.2f minutos\n", hora, h_minutos_convertidos + minutos * 100);
    printf("\n");
    return 0;
}
