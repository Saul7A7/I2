#include <stdio.h>
#include <stdlib.h>
#include "../include/SeparadorParImpPrim.h"

int** create_square_matrix(size_t dim);
void llenar (int **, size_t, int);
void imprimir_M(int **M,int Dim);
void imprimir_A(int *Ar);

int main(int argc, char const *argv[]){
    
    size_t Dimension = atoi(argv[1]);
    int seed = atoi(argv[2]);
    char eleccion = argv[3][0];
    int **Matriz = create_square_matrix(Dimension);
    llenar(Matriz, Dimension, seed);
    imprimir_M(Matriz, Dimension);
    
    int* resultado;
    
    switch (eleccion){
    case '1':
        resultado = sep_pares(Matriz, Dimension);
        printf("Pares: \n");
        imprimir_A(resultado);
        break;
    case '2':
        resultado = sep_impares(Matriz, Dimension);
        printf("Impares: \n");
        imprimir_A(resultado);
        break;
    case '3':
        resultado = sep_primos(Matriz, Dimension);
        printf("Primos: \n");
        imprimir_A(resultado);
        break;
    default:
        printf("Opcion invalida\n");
        break;
    }
    
    return 0;
}

int** create_square_matrix(size_t dim) {
  int** mat = (int **)malloc(dim * sizeof(int *)); 
  for (size_t i = 0; i < dim; i++)
    mat[i] = (int *)malloc(dim * sizeof(int));
  return mat;
}

void llenar(int **M, size_t Dim, int seed){
    srand(seed);
    for(int i=0; i<Dim; i++){
        for(int j=0; j<Dim; j++){
            M[i][j]=rand()%seed;
        }
    }
}

void imprimir_M(int **M,int Dim){
    for(int i=0; i<Dim; i++){
        for(int j=0; j<Dim; j++){
            printf("[%i]", M[i][j]);
            }
        printf("\n");
        }
}

void imprimir_A(int *Ar){
    int i=0;
    do{
        printf("[%i] ", Ar[i]);
        i++;
    } while (Ar[i] != 0);
}