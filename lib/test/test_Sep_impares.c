#include <stdio.h>
#include <stdlib.h>
#include "../src/sep_impares.c"

int** create_square_matrix(size_t dim);
void llenar(int **, size_t, int);
void imprimir(int **M, size_t Dim);
int impares(int **Ma, int Dim);
void imprimir_M(int **M,int Dim);
int* Arregloimpares(int **mat, size_t tam);
void imprimir_A(int *Ar, int Dim);

int main(int argc, char const *argv[]){
    
    size_t Dimension = atoi(argv[1]);
    int coso_para_random = atoi(argv[2]);

    int **Matriz = create_square_matrix(Dimension);
    llenar(Matriz, Dimension, coso_para_random);
    imprimir_M(Matriz, Dimension); 
    int *ArregloImpares= Arregloimpares(Matriz, Dimension); 
    
    int i=0;
    printf("Impares:  \n");
    do{
        printf("[%i] ", ArregloImpares[i]);
        i++;
    } while(ArregloImpares[i] !=0);

    return 0;
}
/**@brie ingresara los valores a la matriz
 * @parem M es la mtriz 
 * @parem Dim tamaño de la matriz
 * @parem seed es la semilla
 */
void llenar(int **M, size_t Dim, int seed){
    srand(seed);
    for(int i=0; i<Dim; i++){
        for(int j=0; j<Dim; j++){
            M[i][j]=rand()%seed;
        }
    }
}
/**@brie Creara la matriz
 * @parem dim tamaño de la matriz
 * @return mat que sera la matriz
 */
int** create_square_matrix(size_t dim) {
  int** mat = (int **)malloc(dim * sizeof(int *)); 
  for (size_t i = 0; i < dim; i++)
    mat[i] = (int *)malloc(dim * sizeof(int));
  return mat;
}
/**@brie Hara el procedimiento para poder obtener los impares de la matriz
 * @parem mat es la mtriz y dim tamaño de la matriz
 * @return impares
 */
int *Arregloimpares(int **mat, size_t dim){
    int *impares=(int*)malloc(sizeof(int));
    int cont =0;
    for(size_t i=0; i<  dim; i++){
        for(int j=0; j < dim; j++){
            if((mat[i][j]%2)!=0 && (mat[i][j]) !=0){
                impares[cont]=mat[i][j];
                //printf("\nImpar: %d\n", matriz_impares[cont]);
             cont++;
            }
        }
    }
    impares[cont]=0;
        return impares;
}
/**@brie Imprimira los impares
 * @parem Ar es la mtriz 
 * @parem Dim tamaño de la matriz
 */
void imprimir_A(int *Ar, int Dim){
    printf("El arreglo de numero impares es: \n");
    for(int i=0; i<Dim; i++){
        printf("[%i] ", Ar[i]);
    }
}
/**@brie imprimira la matriz 
 * @parem M es la mtriz 
 * @parem Dim tamaño de la matriz
 */
void imprimir_M(int **M,int Dim){
    for(int i=0; i<Dim; i++){
        for(int j=0; j<Dim; j++){
            printf("[%i]", M[i][j]);
        }
        printf("\n");
    }
}




