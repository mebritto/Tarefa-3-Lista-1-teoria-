#include <stdio.h>
#include <stdlib.h>

int main(){

    float temp_f;

    printf("seja bem vindo ao nosso programa de conversao de temperatura!\n\n");
    printf("digite a temperatura em graus farenheit: \n");
    scanf("%f", &temp_f);

    float temp_c = 0.5555*(temp_f-32);

    printf("o resultado em graus celcius sera: %f", temp_c);

    return 0;
}
