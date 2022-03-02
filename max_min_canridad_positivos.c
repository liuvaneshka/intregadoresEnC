/*
Implementar una función en C que permita hallar el valor máximo, el promedio y que cuente cuantos
números positivos hay en un vector de enteros, sabiendo que la firma de la función es la siguiente: ; Se debe ejemplificar su uso desde una invocación a la
misma en el programa principal
*/
#include<stdio.h>
#include<stdbool.h>

# define MAX_SIZE 100


void hallar_info(int array[], int n, int* max, int* min, int* pos){

    *max = array[0];
    *min = array[0];

    for(int i = 0; i<n; i++){

        if(array[i] < *min){
            *min = array[i];
        }
        if(array[i] > *max){
            *max = array[i]; 
        }
    }
    for(int j = 0; j<n; j++){
        if(array[j]>0){
            printf("%i \n",array[j]);
            *pos+=1;
        }
    }

} 

int main(){

    int pos = 0;
    int n = 0;
    int array[MAX_SIZE];
    int max = 0;
    int min = 0;

    do{
        printf("\n Ingrese el tamanio del vector: ");
        scanf("%i",&n);
    }while((n<0) || (n>100));

    for(int i = 0; i < n; i ++){
        printf("Ingrese el numero %d: ", i + 1);
        scanf(" %d", &array[i]);
    }

    hallar_info(array, n, &max, &min, &pos);

    printf("\n max: %i", max);
    printf("\n min: %i", min);
    printf("\n cantidad de numeros positivos: %i", pos);


    return 0;  
}