#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
int main(){
    //operador ternário, semelhante ao if
    // <variável>se quiser = expressão?(então) valorseverdadeiro:(senão) valorsefalso; exemplo:
    int num, num2;

    printf("informe um numero: ");
    scanf("%d", &num);

    /*if(num <0 )
        num2 = 0;
    else
        num2 =num;*/

    //agora como operador ternário

    num2= (num < 0) ? 0 : num;

    printf("\nO valor de num2 é: %d\n", num2);

    (num2 > 10) ? printf("Maior que 10") : printf("O valor é menor que 10");

    return 0;
}
