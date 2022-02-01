#include<stdio.h>

#define MAX_ELEMENTOS 1000

int main(){
    int primer_numero = 0;
    int segundo_numero = 0;
    int a[MAX_ELEMENTOS];
    int posicion = 0;
    int resultado = 0;

    printf("ingrese el primer nuemro: ");
    scanf("%i",&primer_numero);
    printf("ingrese el segundo nuemro: ");
    scanf("%i",&segundo_numero);

    if(primer_numero<segundo_numero ){

        return -1;
    }

    else{
        for(int i=primer_numero;i>=segundo_numero;i-- ){
            
            printf(" valores: %i ",i);
            a[posicion]=i;
            posicion++;
        }
        printf("\n cantidd numeros: %i", posicion);

        for(int j=1;j<posicion;j++){

            printf("\n contenido vector: %i", a[j]);
            resultado+=a[j];

        }
        printf("\n resultado; %i", primer_numero - resultado);

    }

    return 0;
}