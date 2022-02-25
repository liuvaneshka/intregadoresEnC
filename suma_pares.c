#include<stdio.h>

#define MAX_SIZE 100

int pares_posibles(int vector[], int largo, int suma_buscada){

    int par_sumado = 0;

    for(int i = 0; i < largo; i++){

        for(int j = i + 1; j < largo; j++){

            if(vector[i] + vector[j] == suma_buscada){
                par_sumado += 1;
                printf(" i %i + j %i \n", vector[i], vector[j]);
            }   
        }
    }
    return par_sumado;
}

int main(){

    int vector[MAX_SIZE];
    int largo = 0;
    int suma_buscada = 0;
    int resultado = 0;

    do{
        printf("\n Ingrese el tamanio del vector (entre 0 y 100): ");
        scanf("%i",&largo);
    }while((largo<0) || (largo>MAX_SIZE));

    printf("largo %i: \n",largo);

    for(int i=0; i<largo; i++){
        printf("Introdzuca valores del vector: ");
        scanf("%i", &vector[i]);
    }

    do{
        printf("\n Ingrese la suma buscada: ");
        scanf("%i",&suma_buscada);
    }while((suma_buscada<=0));   

    resultado = pares_posibles(vector, largo, suma_buscada);

    printf("resultado %i: \n", resultado);


    return 0;
}