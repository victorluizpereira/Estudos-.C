#include<stdio.h>
#include<stdlib.h>
#include<gconio.h>
struct horario{//como global
    int hora;
    int minuto;
    int segundo;
};
int main(){
    void receberHorarios(struct horario lista[5]);
    void print(struct horario lista[5]);

    struct horario listaHorarios[5];

    receberHorarios(listaHorarios);
    getche();
    print(listaHorarios);


    return 0;
}
void receberHorarios(struct horario lista[5]){
    int i;
    for(i=0; i<5; ++i){
        printf("Digite o %iº horario(hh:mm:ss): ", i + 1);
        scanf("%i:%i:%i", &lista[i].hora, &lista[i].minuto, &lista[i].segundo);
    }
}
void print(struct horario lista[5]){
    int i;
    for(i=0; i<5; ++i){
        printf("O %iº horario é = %i:%i:%i\n", i+1, lista[i].hora, lista[i].minuto, lista[i].segundo);
    }
}
