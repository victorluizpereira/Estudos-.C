#include<stdio.h>
#include<stdlib.h>
int main(){
    struct horario{
        int hora;
        int minuto;
        int segundo;
    }teste[5]={{10, 20, 30},{20, 30, 60},
             {26, 23, 37},{60, 23, 60},
             {47, 50, 80}};//vai obter 6 vezes horas minutos e segundos,

    /*teste[0].hora = 10;
    teste[0].minuto = 20;
    teste[0].segundo = 30;*/
    for(int i =0 ; i < 5; ++i){
      printf("%i:%i:%i\n", teste[i].hora, teste[i].minuto, teste[i].segundo);
    }


    return 0;
}
