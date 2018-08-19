#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    int i=10;//== comparação != diferente, = intribuição(introduzir ou igualar)


    printf("%d", i==10);//condição para o próprio c, se sim vai imprimir 1, se não 0
    printf("%d", !(i==1));//!() estou negando a informação, que não i não é igual a 1, ou seja a condição é verdadeira
    printf("%d", !(i!=10));//funciona só quando'é condição

    char a;

    printf("digite a letra b:");
    scanf("%c", &a);
    printf("Esse é a letra em maiúscula:%c", toupper(a));//a letra maiúscula só funciona com variáveis, o toupper(a)deve ser sem "".

    return 0;
}
