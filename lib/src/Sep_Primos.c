#include <stdlib.h>

/* @brief Busca los elementos primos dentro de una matriz cuadrada y los guarda dentro de un arreglo
 * @param mat es la matriz de entrada
 * @param tam es el tamanio de la matriz
 * @returns un arreglo con todos los numeros primos de la matriz
 */

int* Sep_Primos(int **mat, size_t tam){
    int *primos = (int*)malloc(sizeof(int));
    int pos = 0;

    for (size_t i = 0; i < tam; i++){
        for (size_t j = 0; j < tam; j++){
            if (mat[i][j] == 0 || mat[i][j] == 1){     
                /* si el numero es 0 o 1 no pasa nada y se pasa
                 * al siguiente numero en la matriz 
                 */
            }else if(mat[i][j] == 2){
                primos[pos] = mat[i][j];
                pos++;
            }else{
                for(size_t k = 2; k < mat[i][j]+1; k++){
                    if (mat[i][j] > k && mat[i][j]%k==0){
                        break;
                    }else if (mat[i][j] == k){
                        primos[pos] = mat[i][j];
                        pos++;
                    }
                }
            }
        }
        
    }
    // Se agrega un cero al final del arreglo para marcar el final
    primos[pos] = 0;
    
    return primos;
}