#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1, num2, num3;
    printf("Digite o numero 1:");
    scanf("%f", &num1);
    printf("Digite o numero 2:");
    scanf("%f", &num2);
    printf("Digite o numero 3:");
    scanf("%f", &num3);
    if (num1 > num2 > num3)
    {

        printf("A ordem e:%f,%f,%f", num1, num2, num3);
    }

    return 0;
}
