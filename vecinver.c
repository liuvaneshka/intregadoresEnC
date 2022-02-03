#include<stdio.h>

int invertir_vector(int *vector, int cantidad_elementos){

    /*int posicion = 0;

    for(int i = 4; i >= 0; i--){

        //printf("%i",vector[i]);
        vector[i]=vector[posicion];
        posicion+=1;

    }*/
    int temp;

    //printf("\ncantidad_elementos:%i\n",cantidad_elementos);

    for (size_t i = 0; i < cantidad_elementos / 2; i++) {

        temp = vector[i];
        vector[i] = vector[5 - i -1];
        vector[5 - i -1] = temp;
    }
}

int main(){

    int vector[] = {1,2,3,4,5};
    size_t cantidad_elementos = sizeof(vector)/sizeof(vector[0]);


    invertir_vector(vector, cantidad_elementos);
    printf("\n");
   
    for(int j =0;j<=4;j++){
        printf("%i",vector[j]);
    }
    
    return 0;
}