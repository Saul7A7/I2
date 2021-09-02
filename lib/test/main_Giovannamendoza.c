#include <stdio.h>
#include <stdlib.h>
#include "..\include\SeparadorParImpPrim.h"

int** create_square_matrix(size_t dim);
void llenar(int **, size_t, int);
void imprimir_M(int **M,int Dim);
void  imprimir_A(int *Ar);

int main(int argc, char const *argv[]){
    
    size_t Dimension = atoi(argv[1]);
    int coso_para_random = atoi(argv[2]);

    int **Matriz = create_square_matrix(Dimension);
    
    llenar(Matriz, Dimension, coso_para_random);
    imprimir_M(Matriz, Dimension);

    int* resul;
    resul = sep_impares(Matriz, Dimension);
    imprimir_A(resul);

    /*printf("\n Teclee una opcion: \n");
    printf("1) buscar pares\n");
    printf("2) buscar impares\n");
    printf("3) buscar primos\n");
    printf("4) salir \n");
    
    char opcion= argv[2][0];
    switch (opcion){
        case '1':
            resul = sep_pares(Matriz, Dimension);
            printf("Pares: \n");
            imprimir_A(resul);
            break;
        case '2':
            resul= sep_impares(Matriz, Dimension);
            printf("Impares: \n");
            imprimir_A(resul);
            break;
        case '3':
            resul= sep_primos(Matriz, Dimension);
            printf("Primos: \n");
            imprimir_A(resul);
            break;
        default:
            printf("Opcion incorrecta\n");
            break;
       } */
       
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
void imprimir_A(int *Ar){
    int i=0;
    do{
        printf("[%i]", Ar[i]);
        i++;
    }while (Ar[i] !=0);
}