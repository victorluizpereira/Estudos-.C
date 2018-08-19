#include<stdio.h>//standate input onput, entrada e saída
#include<stdlib.h>//standate library, livraria(controlar processos)
#include<ctype.h>// para definir em maiúscula, manipular carcateres de várias maneiras

 int main(){
    printf("%i", 3 % 2);// resto de uma divisão

    char c;
    printf("Digite um carcter em letra minúscula:");
    scanf("%c", &c);

    if(c >= 'a'){
        printf("segue a letra que você digitou em maiúscula:%c", toupper(c));//touper converte o que está digitado em letra maiúscula
    }
 return 0;
}
