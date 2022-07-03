#include <stdio.h>
int main()
{
    int seg;
    int min;
    int hor;
    scanf("%d", &seg);
    min = seg / 60;
    hor = min / 60;
    printf("%d:%d:%d", hor, min % 60, seg % 60);

    return 0;
}
