#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<gconio.h>
#include<time.h>

int main(){
    int teste;
    teste = 10;

    printf("%i\n", &teste); // endereço da memória

    int *pont; // criando ponteiro
    pont = &teste; // apontando para o endereço de teste

    printf("%i\n", pont); // local da variável
    printf("%i\n", *pont); // valor da variável

    int teste2 = 20;
    *pont = teste2; // apontando o novo valor para a posição da memória da variavel teste

    printf("O valor novo pelo ponteiro da variável teste é : %i\n", *pont); // local da variável
    printf("O local é :%i\n", pont); // valor da variável


    getchar();

    return 0;
}
