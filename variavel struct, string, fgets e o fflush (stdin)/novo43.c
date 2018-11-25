#include<stdio.h>
#include<stdlib.h>
int main(){
    struct horario{
        int horas;
        int minutos;
        int segundos;
    }agora = {}/*ou {0} ou {.minutos= 10}*/, teste;//facilita de modo mais simples de declarar a variavel e os valores em ordem

    printf("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);

    return 0;
}
