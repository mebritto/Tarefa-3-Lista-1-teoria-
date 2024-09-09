#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float raio;
    float area;
    float pi;
    float valor;

    pi = 3.14;

    printf("digite o raio do seu circulo: \n");
    scanf("%f", &raio);


    valor = raio*raio;
    area = valor*pi;

    printf("a area do seu circulo sera: %f", area);

return 0;
}

