#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

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

int calculo_max(mediciones_t mediciones, int cant_mediciones){
    int maximo = mediciones.medicion[0];

    for(size_t i = 0; i<cant_mediciones;i++){

        if(mediciones.medicion[i]>maximo){
            maximo=mediciones.medicion[i];
        }
    }
    return maximo;
}

int calculo_min(mediciones_t mediciones, int cant_mediciones){
    int minimo = mediciones.medicion[0];

    for(size_t i = 0; i<cant_mediciones;i++){

        if(mediciones.medicion[i]<minimo){
            minimo=mediciones.medicion[i];
        }
    }
    return minimo;
}

float calculo_valor(mediciones_t mediciones, int maximo, int minimo){

    float valor;
    valor = (maximo - minimo)/2;

    return valor;

}

int main(){

    mediciones_t mediciones;
    int cantidad_mediciones;
    int valores_mayores_a_la_formula;
    int valor_max = 0;
    int valor_min = 0;
    float valor;
    int posicion = 0;
    float vector_maximo[MAX_MAYORES];
    
    cantidad_mediciones= cargar_mediciones(&mediciones);
    printf("\n 1. CANTIDAD TOTAL DE MEDICIONES INGRESADAS: %i ",cantidad_mediciones);

    valor_max = calculo_max(mediciones,cantidad_mediciones);
    valor_min = calculo_min(mediciones,cantidad_mediciones);

    //printf("\n maximo: %i",valor_max);
    //printf("\n minimo: %i",valor_min);

    valor = calculo_valor(mediciones,valor_max,valor_min);
    printf("\n valor calculado: %f",valor);
    
    for(size_t i = 0; i < cantidad_mediciones;i++){

        //printf("\n medicion: %i",mediciones.medicion[i]);

        if(mediciones.medicion[i]> valor){
            vector_maximo[posicion]= mediciones.medicion[i] ;
            posicion+=1;
        }
    }

    printf("\n 2. VALORES MAYORES AL VALOR GENERADO POR LA FORMULA: ");

    for(size_t j = 0; j<posicion; j++){
        printf("\n maximos valores: %f",vector_maximo[j]);
    }

    return 0;
}
