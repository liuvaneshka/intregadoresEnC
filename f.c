/*
boolesfibonacci(int vector[], int* poserror, int tam);
La cual permite determinar si una serie de valores ingresada en un vector tiene las características de la sucesión de 
Fibonacci o no (y devolver True o False según corresponda), y a su vez determinar en qué posición del vector se 
detectó la primera incongruencia, el cual se devuelve en el parámetro poserror. 
Recordar que la sucesión de Fibonacci genera obteniendo valores resultantes de la suma de los 2 anteriores (siendo 
el 0 y 1 los iniciales en la sucesión original). 
Se pide completar dicha función y utilizarla en un programa donde el usuario pueda especificar el tamaño y los 
elementos  de  un  vector  de  enteros.  El  programa  debe  mostrar  el  resultado  de  la  operación.A  modo  de 
simplificación, dado que los valores son ingresados por el usuario, el análisis deberá hacerse desde el tercer 
elemento en adelante. 
Se garantiza que el tamaño del vector estará entre 3 y 100 
*/
#include<stdio.h>
#include<stdbool.h>

# define MAX_SIZE 100

void imprimir_vector(int vector[], int tam){
    printf("\n[ ");
    for (int i = 0; i < tam - 1; i++)
        printf("%d,  ", vector[i]);
    printf("%d] \n", vector[tam - 1]);
}

bool boolesfibonacci(int vector[], int *poserror, int tam){
    

    *poserror = 0; 

    for (int i = 0 ; i < tam - 2 ; i++ ){
    
        if(vector[i] + vector[i + 1] != vector[i+2]){
            int pos = i;
            *poserror = pos + 2;
            printf("\nError en la posicion %d.\n", *poserror);
            printf("Numero %d.\n", vector[*poserror]);
            printf("Deberia ser %i \n ",vector[i] + vector[i + 1]);

            return false;
        } 
    }

    return true;

}

int main(){

    int poserror = 0;
    int tam = 0;
    int vector[MAX_SIZE];

    do{
        printf("\n Ingrese el tamanio del vector: ");
        scanf("%i",&tam);
    }while((tam<3) || (tam>100));

    for(int i = 0; i < tam; i ++){
        printf("Ingrese el numero %d: ", i + 1);
        scanf(" %d", &vector[i]);
    }

    imprimir_vector(vector,tam);
    bool f = boolesfibonacci(vector, &poserror, tam);

    printf(f? "true":"false");

    return 0;  
}