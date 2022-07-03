#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("Informe o numero:");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("O seu numero e par!!");
    }
    else
    {
        printf("O seu numero e impar!!");
    }
    return 0;
}
