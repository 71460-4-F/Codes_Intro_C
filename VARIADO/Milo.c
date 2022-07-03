#include <stdio.h>

int main()
{

    int c, c1, c2, c3, c4, menor, menor2;

    printf("digite o valor 1:");
    scanf("%d", &c);
    printf("digite o valor 2:");
    scanf("%d", &c1);
    printf("digite o valor 3:");
    scanf("%d", &c2);
    printf("digite o valor 4:");
    scanf("%d", &c3);
    printf("digite o valor 5:");
    scanf("%d", &c4);

    if (c < c1)
    {
        menor = c;
    }
    else
    {
        menor = c1;
    }

    if (c2 < c3 && c2 < c4)
    {
        menor2 = c2;
    }
    else if (c3 < c2 && c3 < c4)
    {
        menor2 = c3;
    }
    else
    {
        menor2 = c4;
    }

    if (menor < menor2)
    {
        printf("o menor número é: %d", menor);
    }
    else
    {
        printf("o menor número é: %d", menor2);
    }

    return 0;
}
