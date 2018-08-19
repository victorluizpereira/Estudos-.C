#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
#define w 7//# comando; nome da constante ;valor

int main(){
    // a palavra que define uma constante é const -> definir tipo exemplo int --> imutável
    const int a=5;

    printf("%i\n", a);

    printf("%d\n", w);//valor atríbuido na constante, cabeçalho, mais seguro
    printf("%d\n", w+a);//podemos trabalhar com a constante normalmente, só não podemos mudála

    return 0;
}
