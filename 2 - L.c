#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor;
    int notas_100;
    int notas_50;
    int notas_10;
    int notas_5;
    int notas_1;

    printf("digite o valor total: R$");
    scanf("%d", &valor);

    notas_100 = valor / 100;
    valor = valor % 100;

    notas_50 = valor / 50;
    valor = valor % 50;

    notas_10 = valor / 10;
    valor = valor % 10;

    notas_5 = valor / 5;
    valor = valor % 5;

    notas_1 = valor;

    printf("\nquantidade de notas de 100 reais: %d", notas_100);
    printf("\nquantiade de notas de 50 reais: %d\n", notas_50);
    printf("\nquantidade de notas de 10 reais: %d\n", notas_10);
    printf("\nquantidade de notas de 5 reais: %d\n", notas_5);
    printf("\nquantidade de notas de 1 real: %d\n", notas_1);

    return 0;
}
