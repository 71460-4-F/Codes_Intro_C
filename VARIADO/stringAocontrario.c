#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase1[100];
    char frase2[100];
    int i = 0, j = 0;

    scanf("%s", frase1);
    for (i = 0; frase1 != '/0'; i++)
    {
        if (frase1[i] == '/0')
        {
            for (j = i; j >= 0; j--)
            {
                frase2[j] = frase1[i];
            }
        }
    }
    printf(" f1 = %s \n", frase1);
    printf("f2 = %s \n", frase2);

    return 0;
}
