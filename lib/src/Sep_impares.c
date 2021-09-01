/**@brief A function, busca los numeros impares de una matriz.
 * @param **MatrizA, matriz que recibe del usuario
 * @param tam, tamaño de la matriz
 * @return vector_pares[], regresa un vector con los numeros pares de la matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int *sep_impares(int **mat, size_t dim){
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
