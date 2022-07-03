#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float salario, watts, valortotal, valoratraso, valorkw, dia, comatraso, atraso;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor do sal�rio m�nimo\n");
    scanf("%f", &salario);
    printf("Digite a quantidade de Watts\n");
    scanf("%f", &watts);
    valorkw = 0.10 * salario;
    valortotal = valorkw * watts;

    printf("O valor de cada Kw � %2.f\n", valorkw);
    printf("O valor a ser pago pela resid�ncia � %2.f\n\n\n", valortotal);
    printf("Quantos dias que a conta est� atrasada?\n");
    scanf("%f", &atraso);
    comatraso = valortotal;

    while (atraso > 0)
    {
        comatraso = comatraso * 1.05;
        atraso = atraso - 1;
    }
    if (comatraso > 1)
    {
        printf("Com o atraso O valor final � %f\n\n", comatraso);
    }
    else
    {
        printf("N�o houve atraso o valor final ficou %2.f\n", valortotal);
    }

    return 0;
}
