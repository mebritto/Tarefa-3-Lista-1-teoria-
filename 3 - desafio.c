#include <stdio.h>

int main() {

    float preco_acao1 = 24.13;
    float preco_acao2 = 11.00;
    float preco_acao3 = 38.65;
    float dividendo_acao1 = 17.00;
    float dividendo_acao2 = 35.00;
    float dividendo_acao3 = 25.00;
    float valor_total = 1000.00;
    int quantidade_acao1;
    int quantidade_acao2;
    int quantidade_acao3;

    quantidade_acao1 = (int)(valor_total / preco_acao1);
    quantidade_acao2 = (int)(valor_total / preco_acao2);
    quantidade_acao3 = (int)(valor_total / preco_acao3);

    float valor_investido_acao1 = quantidade_acao1 * preco_acao1;
    float valor_investido_acao2 = quantidade_acao2 * preco_acao2;
    float valor_investido_acao3 = quantidade_acao3 * preco_acao3;

    float dy_acao1 = (dividendo_acao1 / preco_acao1) * 100;
    float dy_acao2 = (dividendo_acao2 / preco_acao2) * 100;
    float dy_acao3 = (dividendo_acao3 / preco_acao3) * 100;

    printf("\nação 1: ");
    printf("\nPreço: R$ %.2f", preco_acao1);
    printf("\ndividendos por unidade: R$ %.2f", dividendo_acao1);
    printf("\nquantidade comprada: %d", quantidade_acao1);
    printf("\nvalor investido: R$ %.2f", valor_investido_acao1);
    printf("\ndividendo yield (DY): %.2f%%\n\n", dy_acao1);

    printf("\nação 2: ");
    printf("\npreço: R$ %.2f\n", preco_acao2);
    printf("\ndividendos por unidade: R$ %.2f", dividendo_acao2);
    printf("\nquantidade comprada: %d", quantidade_acao2);
    printf("\nvalor investido: R$ %.2f", valor_investido_acao2);
    printf("\ndividendo yield (DY): %.2f%%\n\n", dy_acao2);

    printf("\nação 3: ");
    printf(" \npreço: R$ %.2f", preco_acao3);
    printf("\ndividendos por unidade: R$ %.2f", dividendo_acao3);
    printf("\nquantidade comprada: %d", quantidade_acao3);
    printf("\nvalor investido: R$ %.2f", valor_investido_acao3);
    printf("\ndividendo yield (DY): %.2f%%\n\n", dy_acao3);

    return 0;
}
