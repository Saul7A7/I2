#include <stdio.h>
#include <stdlib.h>
#include "../src/Sep_Primos.c"

int** create_square_matrix(size_t dim);
void llenar (int **, size_t, int);
void imprimir(int **M, size_t Dim);
int pares(int **Ma, int Dim);
void imprimir_M(int **M,int Dim);

void imprimir_A(int *Ar, int Dim);

int main(int argc, char const *argv[]){
    
    size_t Dimension = atoi(argv[1]);
    int coso_para_random = atoi(argv[2]);

    int **Matriz = create_square_matrix(Dimension);
    llenar(Matriz, Dimension, coso_para_random);

    imprimir_M(Matriz, Dimension);
    
    int* ArregloPares= Sep_Primos(Matriz, Dimension);
    
    int i=0;
    printf("Primos: \n");
    do{
        printf("[%i] ", ArregloPares[i]);
        i++;
    } while (ArregloPares[i] != 0);
    
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
