#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>

int main(){
    //muito importante zerar as variáveis em algumas ocasiõs pois dentro dela possui lixos
    /* em casos onde utilizemos muitos if devemos utilizar o swicth, pois eles
     condensa todas as condições de maneira mais prática:

        swicth(Expressão){
            case(expressão-constante):
                condições...
                break; --> quebra a condição swicth definindo um fim das condições informadas
            case(verdadeiro): --> outra lista de condições
                break;
            default: --> não há necessidade de colocarmos um break; pois ele executa todas as condições se verdadeiro ou não de maneira invariável

        } */
    printf("Digite um valor entre 0 e 9");
    int i;
    scanf ("%i", &i);

    switch(i){
    case 0:
        printf("A opção digitada foi: 0 %dbytes", sizeof(i));
        break;
    case 1:
        printf("A opção digitada foi: 1");
        break;
    case 2:
        printf("A opção digitada foi: 2");
        break;
    case 3:
        printf("A opção digitada foi: 3");
        break;
    case 4:
        printf("A opção digitada foi: 4");
        break;
    case 5:
        printf("A opção digitada foi: 5");
        break;
    case 6:
        printf("A opção digitada foi: 6");
        break;
    case 7:
        printf("A opção digitada foi: 7");
        break;
    case 8:
        printf("A opção digitada foi: 8");
        break;
    case 9:
        printf("A opção digitada foi: 9");
        break;

    default:
        printf("A opção default");
    }

        printf("\n\n\n\n");//segunda aula de switch

    printf("digite o valor entre 0 e 9:");
    scanf("%d", &i);

    switch(i){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("vc digitou um número entre 1 e 5.");
        break;
    default:
        printf("esse valor não é de 0 a 9;");// se caso eu digitar nenhum valor que corresponda anteriormente ele vai devolver isso.
    }

    return 0;
}
