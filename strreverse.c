#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARACTER 50

void invertirString(char palabra[]){
    int contador = 0 ;
    char invertida[MAX_CARACTER];
    int tamanio = strlen(palabra);  
    //printf("\n tamanio: %i",tamanio);
    
    for(int i = tamanio; i>=0; i-- ){
        if(palabra[i]=='e'){
            palabra[i] = 'a';
        }
        printf("%c",palabra[i]);
        invertida[contador]=palabra[i];
        contador++;
    }

    for(int j = 0; j<=tamanio; j ++ ){
        printf("%c",invertida[j]);
        //palabra[j]=invertida[j];
    }
    printf("\ninvertida %s",invertida);
}

int main(){

    char palabra[MAX_CARACTER];

    printf("Ingrese una palabra: ");
    scanf(" %s",&palabra);
    invertirString(palabra);
    printf("\ninvertida: %s",palabra);

    return 0;
}
