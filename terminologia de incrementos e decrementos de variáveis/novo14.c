#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>

int main(){
    /* operadores anteriores usados
        +=; -=; /=; %= -> resto;
    */
    //incremento
    int i =1;
    printf("%d\n", i);
    printf("%d\n", ++i);// caso o ++ esteja antes siguinifica para acrescentar uma antes de executar a próxima função
    i++;// caso ++ esteja na frente seignifica que ele acrescenta um após da variável vazendo assim só ser executado na próxima função
    printf("%d\n", i);

    system("clear");

    //decremento
    int i2=5;
    printf("%d\n", i2);
    printf("%d\n", --i2);
    i2--;
    printf("%d\n", i2);

    system("clear");
    /*
        1) Incremento/
        ----------------->pode ser feito como pré e pós
        2) Decremento/

        pre -> o valor será incrementado/decrementado na instrução
                que a variável estiver contida

        pos -> o valor será incrementado/decrementado na pŕoxima instrução.
    */

    int x=0;
    x =x +1;//incrementar quantas undidas desejarmos
    x +=1;// incrementar quantas unidades desejarmos
    ++x;//op. incremento, só podemos incrementar
        //uma unica unidade
    printf("%d", x);
    return 0;
}
