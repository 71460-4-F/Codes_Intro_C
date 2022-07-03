#include <stdio.h>

float valorx2(int a, int b, int c, int delta)
{

    float formx2;

    formx2 = -b - (sqrt(delta) / (2 * a));

    return formx2;
}

float valorx1(int a, int b, int c, int delta)
{

    float formx1;

    formx1 = -b + (sqrt(delta) / (2 * a));

    return formx1;
}

int valordelta(int a, int b, int c)
{

    int formdel;

    formdel = (b * b) - 4 * a * c;

    return formdel;
}

int main()
{

    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    int delta;
    delta = valordelta(a, b, c);

    float x1;
    x1 = valorx1(a, b, c, delta);

    float x2;
    x2 = valorx2(a, b, c, delta);

    printf("%d\n", delta);
    printf("%.1f\n", x1);
    printf("%.1f", x2);
    return 0;
}
