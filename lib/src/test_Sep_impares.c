#include <stdio.h>
#include <stdlib.h>

/**@brief create_square_matrix creara la matriz
 * @parem dim dimensiono tamaño de la matriz
 * @return mat
*/
int** create_square_matrix(size_t dim) {
  int** mat = (int **)malloc(dim * sizeof(int *)); 
  for (size_t i = 0; i < dim; i++)
    mat[i] = (int *)malloc(dim * sizeof(int));
  return mat;
}
/**@brief Arregloimpares hara las funciones en la matriz,esto permitira devolver los numeros impares de la matriz
 * @parem mat es la matriz
 * @parem dim es el tamaño
 * @return impares
*/
int *Arregloimpares(int **mat, size_t dim){
    int *impares=(int*)malloc(sizeof(int));
    int cont =0;
    for(size_t i=0; i<  dim; i++){
        for(int j=0; j < dim; j++){
            if((mat[i][j]%2)!=0 && (mat[i][j]) !=0){
                impares[cont]=mat[i][j];
             cont++;
            }
        }
    }
    impares[cont]=0;
        return impares;
}