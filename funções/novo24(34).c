#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
#include<math.h>

int main(){// função mãe será trazido tudo aqui

    printf("Valor absoluto\n");

    float somaDeDigitos(float x, float y);//declaração da função da soma dos digitos
    float a, b, soma;//variáveis que irão receber os valores de usuários e a soma dos dois

    printf("Digite 2 numeros: ");
    scanf("%f", &a);//por padrão após o valor ser digitado ele pula uma linha
    scanf("%f", &b);

    soma = somaDeDigitos(a, b);//declarando que a variável soma ira receber a função de soma, além de declarar os valores que a função irá utilizar como variável a e b

    printf("A soma é: %f", soma);

    return 0;
}

float somaDeDigitos(float x, float y){//função de soma
    float valorAbsoluto(float a);//declaração da função do valor absoluto

    if(x < 0)//conceito para que quando x e y forem menores de 0,
        x = valorAbsoluto(x);// a variável x irá receber a função declarada do valor abosoluto
    if(y < 0)
        y = valorAbsoluto(y);


    return x + y;
}

float valorAbsoluto(float a){

    return a*-1;
}
