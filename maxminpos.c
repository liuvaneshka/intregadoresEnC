/*
Liu Gutierrez
Implementar una función en C que permita hallar el valor máximo, el promedio y que cuente cuantos
números positivos hay en un vector de enteros, sabiendo que la firma de la función es la siguiente: void
hallar_info(int array[], int n, int* max, int* min, int* pos); Se debe ejemplificar su uso desde una invocación a la
misma en el programa principal.
*/
#include<stdio.h>

void hallar_info(int array[], int n, int* max, int* min, int* pos){

    *max = array[0];
    *min = array[0];

    printf("positicvo %i \n",*pos);

    for(int i = 0; i<n; i++){

        if(array[i] < *min){
            *min = array[i];
        }
        if(array[i] > *max){
            *max = array[i]; 
        }
        
        if(array[i]>0){
            *pos+=1;
        }
    }

}

int main(){

    int numeros[]= {1,9,-5,3,-99,-5,4,7,8,2};

    int max = 0;
    int min = 0;
    int pos = 0;

    int n = sizeof(numeros)/sizeof(numeros[0]);  

    hallar_info(numeros, n, &max, &min, &pos);

    printf("\n max: %i", max);
    printf("\n min: %i", min);
    printf("\n pos: %i", pos);

    return 0;
}