#include <stdio.h>
int main(void)
{

    int contador = 0;
    int soma = 0;

    while (contador < 10)
    {
        int numero;
        printf("Digite um numero: \n");
        scanf("%d", &numero);
        soma = soma + numero;
        contador = contador + 1;
    }
    printf("Quantidade de numeros lidos: %d\n", contador);
    printf("Soma: %d\n", soma);
}
