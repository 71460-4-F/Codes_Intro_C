#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int salario, horas, hora_trabalhada, salario_bruto, imposto, salario_receber;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite as horas trabalhadas\n");
    scanf("%d", &horas);
    printf("Digite o valor do sal�rio m�nimo\n");
    scanf("%d", &salario);

    hora_trabalhada = salario / 2;
    salario_bruto = horas * hora_trabalhada;
    imposto = 0.03 * salario_bruto;
    salario_receber = salario_bruto - imposto;
    printf("O salario a ser recebido � %d\n", salario_receber);
    return 0;
}
