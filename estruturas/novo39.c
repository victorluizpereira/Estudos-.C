#include<stdio.h>
#include<stdlib.h>
int main(){
    int bas=10;

    printf("%x", bas);//hexadecimal
    printf("%o", bas);//octadecimal

    struct horario//esqueleto ainda precisa declarar
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;//declarado a estrutura do tipo horário como uma função
    /*
        em estruturas não permite adicionar valores internamente apenas externamente
        após declara-lo
    */
    agora.horas=15;//nome da estrutura, variavel dentro da estrutura, valor que ela recebe
    agora.segundos=30;
    agora.minutos=17;
    /*
        posso gerar outras declarações utilizando a mesma
        estrutura, porem não substituirá os valores definidos
        pela outra declaração, pense em moude que possa ser
        utilizado varias vezes sem destruir o que tinha feito
        anteriormente com outra forma
    */
    struct horario depois;

    depois.horas= agora.horas + 10;

    printf("%i,%i,%i", agora.horas, agora.segundos, agora.minutos);
    printf("%i", depois.horas);


    return 0;
}
