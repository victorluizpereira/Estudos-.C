#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    //x= x+1; é o mesmo que x+=1; são atalhos de operações ajuda a compilar mais rapido
    /*
        os outros operatórios são:
    1) += -> soma exempo x+=1 ou seja x=x+1
    2) -= -> subtração exemplo x-=1 ou seja x=x-1
    3) *= -> multiplicação exemplo x*=1 ou seja x= x*1
    4) /= -> divisão exemplo x/=1 ou seja x=x/1
    5) %= -> resto da divisão exemplo x%=1 ou seja x=x/1 ->resto

    */
    int x=50;
    printf("\nsoma: %d\n", x+=100);
    printf("\nsubtração: %d\n", x-=50);
    printf("\nmultiplicação: %d\n", x*=3);
    printf("\nresto da divisão entre X/5: %d\n", x/=5);
    printf("\ndivisão: %d\n", x/=25);

return 0;
}
