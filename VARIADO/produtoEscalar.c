

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int espaco;
    float *coordenadas;
} VetorRn;

float produtoEscalar(VetorRn v1, VetorRn v2);

int main()
{
    VetorRn v1, v2;

    int n;
    scanf("%d", &n);

    v1.espaco = n;
    v2.espaco = n;

    v1.coordenadas = (float *)malloc(n * sizeof(float));
    v2.coordenadas = (float *)malloc(n * sizeof(float));

    int i;
    for (i = 0; i < n; i++)
        scanf("%f", &v1.coordenadas[i]);

    for (i = 0; i < n; i++)
        scanf("%f", &v2.coordenadas[i]);

    float produto = produtoEscalar(v1, v2);

    printf("%.2f", produto);
}
