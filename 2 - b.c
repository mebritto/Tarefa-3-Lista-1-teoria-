#include <stdio.h>
#include <stdlib.h>

int main (){

    char nome[1][100];
    printf("Ola! Eu sou o n°1, como é seu nome?\n");
    gets(nome);
    printf("Bem vindo ao clube %s", nome);

return 0;
}
