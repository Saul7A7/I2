#include "../include/SeparadorParImpPrim.h"
#include <stdio.h>
#include <stdlib.h>

int** create_square_matrix(size_t dim);
void llenar(int **, size_t, int);
void imprimir_M(int **M,int Dim);


int main(int argc, char const *argv[]){
    
    size_t Dimension = atoi(argv[1]);
    int coso_para_random = atoi(argv[2]);

    int **Matriz = create_square_matrix(Dimension);
    
    llenar(Matriz, Dimension, coso_para_random);
    imprimir_M(Matriz, Dimension);

    int* ArregloImpares= sep_impares(Matriz, Dimension);
    int i=0;
    printf("Impares:  \n");
    do{
        printf("[%i] ", ArregloImpares[i]);
        i++;

    } while(ArregloImpares[i] !=0);

    int* ArregloPares = sep_pares(Matriz,Dimension);
    printf("\n\n");
    int a = 0;
    do{
        printf("[%a]",ArregloPares[a]);
        a++;
    }while(ArregloPares[a] != 0);
    
    int* ArregloPrimos= sep_primos(Matriz, Dimension);
    
    int c=0;
    printf("Primos: \n");
    do{
        printf("[%c] ", ArregloPrimos[c]);
        c++;
    } while (ArregloPrimos[c] != 0);
    
    //imprimir_A(ArregloPares, 13);
    return 0;
    
}

void llenar(int **M, size_t Dim, int seed){
    srand(seed);
    for(int i=0; i<Dim; i++){
        for(int j=0; j<Dim; j++){
            M[i][j]=rand()%seed;
        }
    }
}

int** create_square_matrix(size_t dim) {
  int** mat = (int **)malloc(dim * sizeof(int *)); 
  for (size_t i = 0; i < dim; i++)
    mat[i] = (int *)malloc(dim * sizeof(int));
  return mat;
}

void imprimir_M(int **M,int Dim){
    for(int i=0; i<Dim; i++){
        for(int j=0; j<Dim; j++){
            printf("[%i]", M[i][j]);
        }
        printf("\n");
    }
}