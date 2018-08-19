#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
int main(){
    char caractere = 0;

    printf("Digite uma letra entre A ate G: ");
    caractere = getche();
    printf("\n");

    int codigo = 0;

    /*
    switch(caractere){
        case 'A':
            codigo = 65;
            break;
        case 'B':
            codigo = 66;
            break;
        case 'C':
            codigo = 67;
            break;
        case 'D':
            codigo = 68;
            break;
        case 'E':
            codigo = 69;
            break;
        case 'F':
            codigo = 70;
            break;
        case 'G':
            codigo = 71;
            break;
        default:
           (caractere!='A'|'B'|'C'|'D'|'E'|'F'|'G')? printf("Valor inválido") :printf("");
    } */

        //Caso fosse concatenado

        codigo = (caractere=='A')? 65:
                 (caractere=='B')? 66:
                 (caractere=='C')? 67:
                 (caractere=='D')? 68:
                 (caractere=='E')? 69:
                 (caractere=='F')? 70:
                 (caractere=='G')? 71: -1;

    printf("O código ACII da letra digitada é: %i", (codigo > 40 )? codigo : printf("Incorreto"));//caso seja dentro de um parenteses não há necessidade ;



    return 0;
}
