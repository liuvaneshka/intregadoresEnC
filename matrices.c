#include<stdio.h>

#define MAX_SIZE 100

void matriz(char vector[], int largo){

    for(int i = 0; i < largo; i++){

        for(int j = 0 ; j < largo; j++){
            printf("%c %c |",vector[i],vector[j]);
        }
        printf("\n");
    }
}


void matriz_comparar_indice_sin_repetir(char vector[], int largo){

    for(int i = 0; i < largo; i++){

        for(int j = i + 1 ; j < largo; j++){
            printf("%c %c |",vector[i],vector[j]);
        }
        printf("\n");
    }
}


void matriz_invertida(char vector[], int largo){

    for(int i = largo - 1; i >= 0 ; i--){

        for(int j = i - 1 ; j >= 0 ; j--){
            printf("%c %c |",vector[j],vector[i]);
        }
        printf("\n");
    
    }
}


void matriz_(char vector[], int largo){

    for(int i = 0; i < largo; i++){

        for(int j = 1 ; j < largo; j++){
            printf("%c %c |",vector[i],vector[j]);
        }
        printf("\n");
    }
}


void matriz_filled_0(char vector[], int largo){

    for(int i = 0; i < largo; i++){

        int contador = 0;
        int fill = 0;

        for(int j = i + 1 ; j < largo; j++){
            printf("%c %c |",vector[i],vector[j]);
            contador += 1;
        }
        fill = largo - contador - 1;
        if (fill != (largo-1)){
            for(int k = 0; k < fill ; k++){
                printf("0   |");
            }
        }
        printf("\n");
    }
}



int main(){

    char vector[MAX_SIZE];
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
        scanf(" %c", &vector[i]);
    }

    matriz(vector, largo);

    printf("Comparar un indice con el resto sin repetir \n");

    matriz_comparar_indice_sin_repetir(vector, largo);

    printf("Comparar un indice con el resto sin repetir rellenar 0 \n");

    matriz_filled_0(vector, largo);

    printf("invertida \n");

    matriz_invertida(vector, largo);

    printf("comparar \n");

    matriz_(vector, largo);

    return 0;
}
