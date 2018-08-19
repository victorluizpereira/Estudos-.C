#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    /*
    do{}while(); :->

    faça{

    }
    enquanto(true);
    */
    int contador = 0;
    char c;

    do{
        contador +=1;
        printf("\ndigite 0 para sair do looping:\n");
        printf("\n%d vezes\n", contador);
        c = getchar();
    }
    while(c!='0');
    /*
        Na instrução acima ele irá repetir enquanto a condição não for verdadeira
        ou seja enquanto o valor digitado como caracter não for 0 ele vai repetir
        a função
    */

    return 0;
}
