#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>

int main(){
    // é possivel definir a uma variável do mesmo tipo o mesmo nome se nele for utilizado um separador de blocos
    //exemplo:
    int ma=2;
    double num=10;
    {
        int ma=4;

        printf("%d", ma);
    }
    printf("%d", ma);

    // em alguns casos não é necessário declarar um bloco mesmo sendo algo mais prático
    // exemplo:

    printf("informe um numero:\n");
    scanf("%lf", &num);// %lf pois o tipo da variável é double, a memória atribuida a ela geralmente são apénas para numeros pequenos

    if(num==50)
        printf("bloco If\n");
    else{
        printf("bloco else\n");
    }

    return 0;
}
