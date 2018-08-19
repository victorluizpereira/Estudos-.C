#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    // além de existir os tipos de variáveis podemos declarar algumas informaçoes com elas, utilizando:
    /*
        1) signed -> declara que o valor da variável tem de ser positivo e negativo + e -.
        2) unsigned -> declara que o valor da variável somente é +.
        3) long -> declara que irá aumentar o armazenamento da nossa variável.
        4) short -> diminui o tamanho de armazenamento da nossa variável.
    */
    /*
        por esse motivo que muitos programas perguntão se seu computador trabalha com 32 ou 64 bytes pois
        os programas feitos trabalham com variáveis com armazenamento próprios para computadores de 32 ou
        64 bytes
    */
    int i=10;
    unsigned short int u;
    double e;
    short int w;

    printf("%d -> variável u\n", sizeof(u));//O sizeof() mostra o armazenamento total da variável -2 bytes de memória, foi reduzido pois além do short reduzir pela metade o unsigned diz que tem de ser inteiro ou seja a memória dedicada ao - não existirá então o valor reduzirá pela metade.
    printf("%d -> variável i\n", sizeof(i));//como é inteiro e o valor nao foi reduzido porque não é unsigned -4 bytes de memória.
    printf("%d -> variável e\n", sizeof(e));// o double não aceita a declaração short pois nele há - 8 bytes de memória.
    printf("%d -> variável e\n", sizeof(w));// o short reduz pela metade a memória sendo ela de 4 para -2 bytes de memória.

    return 0;
}
