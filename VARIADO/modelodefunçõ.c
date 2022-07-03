#include <stdio.h>
#include <stdlib.h>

int convertertempo(int seg)
{
    int h, m, s, restoh;
    h = seg / 3600;
    restoh = seg % 3600;

    m = restoh / 60;
    s = restoh % 60;

    printf("%d:%d:%d", h, m, s);

    return convertertempo;
}
int main()
{
    int seg;

    printf("Informe a quantidade de segudno: ");
    scanf("%d", &seg);

    convertertempo(seg);

    system("pause");
    return 0;
}
