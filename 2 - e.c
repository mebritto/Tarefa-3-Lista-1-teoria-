#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float altura;
    float largura;
    float calculo;
    float latas;
    double arredonda_pcima, quantidade_de_latas;

    printf("/Olá, seja bem vindo(a) ao software que calcula a quantidade de tintas para pintar a sua parede de maneira automatica\n\n");
    printf("Para inciar por favor informe a altura e largura da sua parede em metros (m)\n");
    printf("Informe a altura: ");
    scanf("%f", &altura);
    printf("\nInforme a largura da parede: ");
    scanf("%f", &largura);

    calculo = (altura*largura);
    latas = calculo*300.0; //valor de 300mL por metro quadrado
    quantidade_de_latas = latas/2000.0;

    arredonda_pcima = ceil(quantidade_de_latas); // floor - arredonda pra baixo

    printf("a sua parede tem %.lf m^2, logo: precisa de %.lf lata(s) para pintar sua parede:\n", calculo, quantidade_de_latas);

return 0;

}
