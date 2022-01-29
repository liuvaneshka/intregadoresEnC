#include<stdio.h>

#define MAX_ROLLS 12

typedef struct rollo{
    int nro;
    float peso;
}rollo_t;

void validar_peso(float peso){
    if(peso<12){
        printf("\n error fuera de norma \n ");
    }
}

int cargar_rollos(rollo_t *rollo){

    int cant_rollos = 0;
    char ingreso;
    
    do{
        do{
            //printf("\n rollos: %i \n", cant_rollos);
            printf("\n ingrese el peso del %d rollo: \n", cant_rollos + 1);            
            (rollo + cant_rollos)->nro = cant_rollos+1 ;
            scanf("%f", &(rollo + cant_rollos)->peso);
            validar_peso((rollo + cant_rollos)->peso);
    
        }while(((rollo + cant_rollos)->peso) < 12);
        printf("\n nro rollo: %i ",rollo->nro);

        cant_rollos += 1;
        //printf("\n rollos: %i \n",cant_rollos);
        printf("\n continuar agregando s \n");

        scanf(" %c", &ingreso);

    }while(ingreso == 's');

    return cant_rollos;

}

float calcular_peso_promedio(rollo_t rollos[MAX_ROLLS], int cantidad_rollos){

    float peso_total;
    float peso_prom;

    for(size_t i = 0; i<cantidad_rollos;i++){
        peso_total+=rollos[i].peso;
    }

    peso_prom= (peso_total/cantidad_rollos);

    return peso_prom;
}

int buscar_rollo_mayor_peso(rollo_t rollos[MAX_ROLLS],int cantidad_rollos){

    int nro_mayor_peso = rollos[0].nro;
    float peso_mayor = rollos[0].peso;

    for(size_t i = 0; i<cantidad_rollos;i++){

        if(rollos[i].peso > peso_mayor){

            printf("\n if nro mayor peso: %i",nro_mayor_peso);
            nro_mayor_peso = rollos[i].nro;
            peso_mayor = rollos[i].peso;

        }

    }

    printf("\nmayor peso: %f", peso_mayor);
    printf("\nnro mayorpeso: %i", nro_mayor_peso );
    return nro_mayor_peso;
}


int main(){

    
    rollo_t rollo[MAX_ROLLS];
    int cantidad_rollos = 0;
    float peso_promedio;
    int nro_rollo_mayor;

    cantidad_rollos = cargar_rollos(rollo);
    peso_promedio = calcular_peso_promedio(rollo, cantidad_rollos);
    nro_rollo_mayor = buscar_rollo_mayor_peso(rollo, cantidad_rollos);
    for(size_t i = 0; i<cantidad_rollos;i++){

        printf("\n nro rollo: %i", rollo[i].nro);
        printf("\t peso rollo: %f", rollo[i].peso);

    }
    printf("\n cantidad de rollos: %i ",cantidad_rollos);
    printf("\n peso promedio: %f", peso_promedio);
    printf("\n nro del rollo mas pesado: %i", nro_rollo_mayor);

    return 0;
}
