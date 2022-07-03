#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x;
    int y;
    int cont = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    for (cont = 0; cont < y; cont++)
    {
        for (x = 0; x < y; x++)
        {
            cont = x + x;
        }
    }

    printf("%d", cont);
}
