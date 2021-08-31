#include <stdio.h>
#include <stdlib.h>

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
