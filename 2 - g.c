#include <stdio.h>
#include <stdlib.h>

int main(){

    float pressao;
    float volume;
    float temperatura;
    float massa_ar;

    printf("bem vindo ao software para calculo da massa de ar de um pneu! \n\n");

    printf("informe a pressao do pneu: ");
    scanf("%f", &pressao);

    printf("\ninforme o volume do pneu: ");
    scanf("%f", &volume);

    printf("\ninforme a temperatura do pneu: ");
    scanf("%f", &temperatura);

    massa_ar = ((pressao*volume)/(0.37*(temperatura+460)));

    printf("A massa de ar do pneu sera: %.3f", massa_ar);

    return 0;

}
