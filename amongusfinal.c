// 1) Resultado del siguiente calculo: Asesinados totales / ( Nº de veces de tripulante - Nº de veces que murió).
// 2) Mostrar el siguiente mensaje con la información de ingreso correspondiente:
// Impostor:
// Juego 1 - 5 asesinados
// Juego 2 - 1 asesinados
// Juego 3 - 2 asesinados

#include<stdio.h>

#define MAX_S 100

typedef struct jugador{
    int cant_impostor;
    int cant_asesinados[MAX_S];
    int cant_tripulante;
    int cant_muertes;
}jugador_t;

void cargar_datos_jugador(jugador_t *jugador){
    printf("cuantas veces fuiste impostor? \n");
    scanf("%d",&jugador->cant_impostor);

    for(int i = 0; i < jugador->cant_impostor; i++){
        printf("cuantos tripulantes asesinaste en la %zu ocasion? \n",i+1);
        scanf("%d",&jugador->cant_asesinados[i]);
    }

    printf("cuantas veces fuiste tripulante? \n");
    scanf("%d",&jugador->cant_tripulante);

    printf("cuantas veces que moriste como tripulante e impostor? \n");
    scanf("%d",&jugador->cant_muertes);

    printf("Impostor: \n");
    for(int i = 0;i < jugador->cant_impostor;i++){
        printf("Juego %zu -", i+1);
        printf("%d asesinados \n", jugador->cant_asesinados[i]);
    }

    printf("fuiste tripulante: %d \n",jugador->cant_tripulante);
    printf("moriste:           %d \n",jugador->cant_muertes);
}

float calculo_pedido(int *cant_asesinados, int cant_impostor, int cant_tripulante, int cant_muertes){
    
    int total_asesinados = 0;
    float calculo = 0;

    for(int i=0;i<cant_impostor;i++){
        //printf("i = %d \n",i);
        //printf("asesinados: %d \n",*(cant_asesinados + i));
        total_asesinados += *(cant_asesinados + i);
    }
    
    printf("total asesinados: %d \n", total_asesinados);
    printf("muertes :  %d\n",cant_muertes);
    printf("tripulante : %d \n",cant_tripulante);
    calculo = total_asesinados / ( cant_tripulante - cant_muertes);
    printf("calculo = %f",calculo);
}

int main(){

    jugador_t jugador;

    cargar_datos_jugador(&jugador);
    calculo_pedido(jugador.cant_asesinados, jugador.cant_impostor,jugador.cant_tripulante, jugador.cant_muertes);

    return 0;
}
