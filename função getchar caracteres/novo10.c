#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    printf("\nDigite o número 1:");

    char c;
    c = getchar();// possui a mesma função que o scanf porem ele só lé caracteres

    if(c =='1'){
        printf("\nO caracter digitado esta correto.\n");
    }
    else{
        printf("\nO valor digitado é invalido.\n");
        printf("\nVocê digitou o caracter: >%c<.\n", c);
    }

    return 0;
}
