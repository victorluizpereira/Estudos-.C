#include<stdio.h>

int main(){
    char nome[30];
    char sobrenome[30];

    printf("Insira seu nome e sobrenome: \n");
    scanf("%s%s", &nome, &sobrenome);

    printf("%s %s\n", nome, sobrenome);


    return 0;
}
