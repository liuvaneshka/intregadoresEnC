#include <stdio.h>

#define MAX_SIZE 100

void imprimir_vector(int *vector, int n) {
    if (n == 0) {
        printf("[]");
    } else {     
        putchar('[');
        for (int i = 0; i < n - 1; i++)
            printf("%d, ", vector[i]);
        printf("%d]", vector[n - 1]);
    }
}


void swap_elemento(int vector[], int n, int desde, int hasta){
    int temp = vector[desde];
    vector[desde] = vector[hasta];
    vector[hasta] = temp;
}


void mover_elemento(int vector[], int n, int desde, int hasta){
    int temp = vector[desde];
    int v[MAX_SIZE];

    for (int i = 0; i < n; i++){
        v[i] = vector[i];
    }

    for(int i = 0; i < n ; i++){
        if(i > desde && i<=hasta){
            vector[i-1] = v[i];
        }
        else{
            vector[i] = v[i];
        }
    }
    vector[hasta] = v[desde];

    /*
    for(int i = 0; i < n; i++){
        if(desde==0){
            if(desde<i<hasta){
                vector[i] = vector[i+1];
            }
            if(i==hasta){
                vector[i] = temp;
            }
            if(i>hasta){
                vector[i] = v[i] ;
            }
        }
        if(desde>0){
            if(i < desde){
                vector[i] = v[i];
            }
            if(i == desde){
                vector[i] = v[desde+1];
                desde++;
            }
            if(i== hasta){
                vector[i] = temp;
            }
            if(i>hasta){
                vector[i] = v[i];
            }
        }
    }
    */
}


int main(){
    int i=0;
    int numero;
    int n=0;
    int desde = 0;
    int hasta = 0;
    int vector[MAX_SIZE];


    do{
        printf("\n Ingrese el tamanio del vector (entre 0 y 100): ");
        scanf("%i",&n);
    }while((n<0) || (n>MAX_SIZE));

    printf("\n tamanio: %i\n",n);

    for(i=0; i<n; i++){
        printf("Introdzuca valores del vector: ");
        scanf("%i", &vector[i]);
    }

    imprimir_vector(vector, n);

    do{
        printf("\nDESDE (no menor a 0 ni mayor a %i): ",n-1);
        scanf("%i",&desde);
    }while((desde<0) || (desde>n));

    do{
        printf("HASTA (no mayor a %i y distinto de hasta %i) : ",n-1,hasta);
        scanf("%i",&hasta);
    }while((hasta<0) || (hasta>n) || (hasta == desde));

    mover_elemento(vector, n, desde, hasta);

    imprimir_vector(vector, n);

    return 0;
}