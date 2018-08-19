#include<stdio.h>/* inclusão de arquivos com código base */
#include<stdlib.h>
/* exercício para calculadora */
int main(){/* código base em valor inteiro */
    float A, B, X;/* apresentação de variáveis em valores quebrados */

     printf("\nDigite o valor 1:\t");/* Imprime a condição para o valor 1 */
     scanf("%f", &A);/* Digitar o Valor da Variável A */
     if(A <0){/* condição para o valor digitado\n 1 */
        printf("\nValor inválido\n");/* Impresão no caso da condição ser válida */
        printf("\nDigite o valor 1:\t");/* caso seja valido, voltar para imprimir e digitar o valor 1 */
        scanf("%f", &A);
     }

     printf("\nDigite o valor 2:\t");/* Imprime a condição para o valor 2 */
     scanf("%f", &B);/* Digitar o Valor da Variável B */
     if(B <0){/* condição para o valor digitado 2 */
        printf("\nValor inválido\n");/* Impresão no caso da condição ser válida */
        printf("\nDigite o valor 2:\t");/* caso seja valido, voltar para imprimir e digitar o valor 2 */
        scanf("%f", &B);
     }

     printf("\nValores das variáveis: A=%f B=%f\n", A, B);/* Apresentação dos valores das variáveis */
     X= A+B;/* operação das variáveis digitadas */
     printf("\nResulatado: %f", X);/* imprimir o resultado da operação */

return 0;/* Retorna o programa para o sitema */
}
