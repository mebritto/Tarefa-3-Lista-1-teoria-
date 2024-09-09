#include <stdio.h>
#include <stdlib.h>

int main (){
        char nome[1][100];
        int idade;
        int expectativa;
        int resultado;
        expectativa = 76;

        printf("digite seu nome: \n");
        fgets(nome, sizeof(nome), stdin);

         printf("Digite sua idade: ");
         scanf("%d", &idade);

        //adotando a expectativa de vida como aproximadamente 76 anos, de acordo com o jornal usp

        resultado = expectativa - idade;

        printf("sua expectativa de vida: %d anos", resultado);
}

