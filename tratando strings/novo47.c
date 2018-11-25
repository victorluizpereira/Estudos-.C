#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
#include<math.h>

int main(){
    //formas de tratar strings em .c
    char palavra[6] = {'B','r', 'a','s','i','l'};//formas anteriores utilizadas
    char palavra1[] = {'B','r', 'a','s','i','l'};
    char palavra2[7] = {"Brasil"};//para fazer uma string basta apénas colocar em aspas duplas, 7 pois no fim do vetor ele irá ler \0, informar que a string acabou
    char palavra3[] = {"Brasil"};//também não necessita informar o tamanho do vetor
    char palavra4[] = "Brasil";//outra forma é que não há a necessidade de informar o vetor com colchets

    printf("\n%s", palavra);//para string %s
    printf("\n%s", palavra1);
    printf("\n%s", palavra2);
    printf("\n%s", palavra3);
    printf("\n%s", palavra4);

    return 0;
}
