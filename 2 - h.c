#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a1;
    float r;
    float an;
    int n;

    printf("\tProgressao Aritmetica - PA\n");

    printf("\nEntre com o valor do primeiro termo: ");
    scanf("%f", &a1);

    printf("\nEntre com o valor da razao: ");
    scanf("%f", &r);

    printf("\nEntre com o numero dos termos: ");
    scanf("%d", &n);

    an = (a1+(n - 1) * r);

    printf("\n\nE-nesimo termo da PA - an: %f\n\n", an);

    return 0;
}
