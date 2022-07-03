#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n1, n2, maior = 0, menor = 0;
    printf("Digite o primeiro numero:");
    scanf("%f", &n1);
    printf("Digite o segundo numero:");
    scanf("%f", &n2);
    if (n1 > n2)
    {
        maior = n1;
        menor = n2;
    }
    else if (n2 > n1)
    {
        maior = n2;
        menor = n1;
    }
    printf("O maior numero e%.2f\nO menor numero e %.2f", maior, menor);
    system("pause");
    return 0;
}
