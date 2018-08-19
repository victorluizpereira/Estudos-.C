#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>

int main()
{
    float num1, num2, resultado;
    char x='0';

    printf("\t\t\t>>>>>> Calculadora 2.0 <<<<<<");

    do
    {
        num1 = num2 =resultado =0;//resetar a variável
        //imprimindo as opções da nossa calculadora
        printf("\nOperações:");
        printf("\n(1) somar\n");
        printf("(2) subtrair\n");
        printf("(3) multiplicar\n");
        printf("(4) dividir\n");
        printf("(0) Sair do programa\n");

        printf("\nInforme a operação:\n");
        printf("\t>>>");
        x = getche();//getche diferente de getchar pois ele armazena a variável sem precisar precionar o enter
        printf("<<<");
        if((x!='0')&(x!='1')&(x!='2')&(x!='3')&(x!='4')){

            printf("\nO Valor informado é incorreto, escolha uma operação que está na tabela.\n");

            while((x!='0')&(x!='1')&(x!='2')&(x!='3')&(x!='4')){
                printf("\nInforme a operação:\n");
                printf("\t>>>");
                x = getche();
                printf("<<<");
            }
        }

        if(x =='1'){
            printf("\t\t<--->  Soma");
        }
        else{
            if(x=='2'){
               printf("\t\t<--->  Subtração");
            }
            else{
                if(x=='3'){
                    printf("\t\t<--->  multiplicação");
                }
                else{
                    if(x=='4'){
                        printf("\t\t<--->  divisão");
                    }
                }
            }
        }

        if(x !='0'){
            printf("\nDigite o primeiro número da equação:\n\t>>>");
            scanf("%f", &num1);
            printf("Digite o segundo número da equação:\n\t>>>");
            scanf("%f", &num2);

            if (x =='1'){
                resultado =num1 +num2;
                }
            else{
                if(x=='2'){
                    resultado= num1-num2;
                    }
                else{
                    if(x=='3'){
                        resultado= num1*num2;
                        }
                    else{
                        if(x=='4'){
                            resultado= num1/num2;
                            }
                        }
                    }
                }
            }
        if(x !='0'){
            printf("\nO resultado eh: \t-->>>>>%f<<<<<--\n", resultado);
        }
        else{
            printf("\nPressione uma tecla se tem serteza que deseja sair.");
        }
        getch();
    }
    while(x !='0');

    return 0;
}
