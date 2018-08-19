#include<stdio.h>
#include<stdlib.h>

int main(){
    float A=5, B=2, X=0;

    while(X !=A){/* Enquanto X for diferente de A vc devolve as operações caso for verdade */
        B = B+1;/* operações enquanto while */
        printf("\n B While: \t%f", B);/*Imprime o valor de B enquanto X ainda não for igual a A*/
        X++;/*X+1*/
    }

    printf("\nB =%f", B);/*imprimir o valor final de B*/
return 0;
}

