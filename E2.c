/*
La cual permite calcular la productoria de los elementos de un vector de enteros, con la 
salvedad que si encuentra un 0 en alguna de sus posiciones debe elevar al cuadrado el 
resultado parcial del cálculo hasta ese momento. El resultado debe ser guardado en el 
puntero 'resultado'. 
Se pide completar dicha función y utilizarla en un programa donde el usuario pueda 
especificar el tamaño y los elementos de un vector de enteros. El programa debe mostrar el 
resultado de la operación. 
Se garantiza que el tamaño del vector estará entre 1 y 100 
*/
#include<stdio.h>
#include<stdbool.h>

# define MAX_SIZE 100

void productopotente(int vector[], int* resultado, int tam){

    *resultado = vector[0];

    for(int i = 0; i < tam - 1; i++ ){

        if(vector[i+1]==0){
            *resultado = (*resultado) * (*resultado);
        }
        else{
            *resultado = (*resultado) * vector[i+1];
                    }
    }
    printf("resultado: %i", *resultado);
}

int main(){

    int resultado = 0;
    int tam = 0;
    int vector[MAX_SIZE];

    do{
        printf("\n Ingrese el tamanio del vector: ");
        scanf("%i",&tam);
    }while((tam<=1) || (tam>100));

    for(int i = 0; i < tam; i ++){
        printf("Ingrese el numero %d: ", i + 1);
        scanf(" %d", &vector[i]);
    }

    productopotente(vector, &resultado, tam);

    return 0;  
}