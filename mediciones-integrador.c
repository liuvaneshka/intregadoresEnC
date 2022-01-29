#include<stdio.h>
#include<string.h>

#define MAX_MED 50
#define MAX_MAYORES 50

typedef struct mediciones{

    int medicion[MAX_MED];

}mediciones_t;

int cargar_mediciones(mediciones_t *mediciones){

    int med;
    int cant_med = 0;
    int i = 0;
    char ingreso = ' ';

    do{

        cant_med+=1;
        printf("\nIngresa medicion entero positivo, cualquier otro salir: ");
        scanf("%i",&mediciones->medicion[i]);
        i++; 

        printf("\n continuar agregando s ");

        scanf(" %c", &ingreso);

    }while(ingreso == 's');   

    return cant_med;
}

void asigna_max_min(mediciones_t mediciones, int cant_mediciones, int *max_medicion, int *min_medicion) {
    *max_medicion = mediciones.medicion[0];
    *min_medicion = mediciones.medicion[0];

    for(size_t i = 0; i < cant_mediciones; i++) {

        if(mediciones.medicion[i] < *min_medicion) {
            *min_medicion = mediciones.medicion[i];
        }

        if(mediciones.medicion[i] > *max_medicion) {
            *max_medicion = mediciones.medicion[i];
        }        
    }
}

void imprimir(int cant_mediciones, float valor_formula, mediciones_t mediciones) {

    printf("\n 2. VALORES MAYORES AL VALOR GENERADO POR LA FORMULA: ");

    for(size_t i = 0; i < cant_mediciones; i++) {

        if(mediciones.medicion[i] > valor_formula) {
            printf("\nMedicion: %i", mediciones.medicion[i]);
        }
    }
}


int main(){

    mediciones_t mediciones;
    int cantidad_mediciones;
    int max_medicion = 0;
    int min_medicion = 0;
    float valor_fomula = 0;

    
    cantidad_mediciones= cargar_mediciones(&mediciones);

    printf("\n 1. CANTIDAD TOTAL DE MEDICIONES INGRESADAS: %i ",cantidad_mediciones); 
    
    asigna_max_min(mediciones, cantidad_mediciones, &max_medicion, &min_medicion);

    valor_fomula = (max_medicion - min_medicion) / 2;

    imprimir(cantidad_mediciones, valor_fomula, mediciones);

    return 0;
}
