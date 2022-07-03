#include <stdio.h>
#include <stdlib.h>

int matriz[2][3];

int main()
{
    int li, co, result = 0;

    for (li = 0; li < 2; li++)
    {
        for (co = 0; co < 3; co++)
        {
            scanf("%i", &matriz[li][co]);
            result = result + matriz[li][co];
        }
    }

    printf("\n\nA soma dos valores: %d\n", result);

    return 0;
}
