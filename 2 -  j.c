#include <stdio.h>
#include <stdlib.h>

int main() {

    int notas_1_real;
    int notas_10_reais;
    int notas_50_reais;
    int notas_100_reais;
    int total;

    printf("digite a quantidade de notas de 1 real: ");
    scanf("%d", &notas_1_real);

    printf("\ndigite a quantidade de notas de 10 reais: ");
    scanf("%d", &notas_10_reais);

    printf("\ndigite a quantidade de notas de 50 reais: ");
    scanf("%d", &notas_50_reais);

    printf("\ndigite a quantidade de notas de 100 reais: ");
    scanf("%d", &notas_100_reais);

    total = (notas_1_real * 1) + (notas_10_reais * 10) + (notas_50_reais * 50) + (notas_100_reais * 100);

    printf("O valor total é R$%d\n", total);

    return 0;
}

