#include<stdio.h>

void hallar_max_min(int arreglo[], int n, int *max, int *min){
    
    *max = arreglo[0];
    *min = arreglo[0];

    for(int i = 0; i<n; i++){

        if(arreglo[i] < *min){
            *min = arreglo[i];
        }
        if(arreglo[i] > *max){
            *max = arreglo[i]; 
        }
    }
}

int main(){

    int max = 0;
    int min = 0;
    int numeros[] = {1, 57, -10, 0, 11, 34, -3, -21, 77, -8, 90};
    int tamanio = sizeof(numeros)/sizeof(numeros[0]);  

    printf("\n tamanio: %i",tamanio);

    hallar_max_min(numeros, tamanio, &max, &min);

    printf("\n max: %i", max);
    printf("\n min: %i", min);

    return 0;
    
}
