/** This library contains functions to perform the four basic arithmetic
 * operations, that is, addition, subtraction, multiplication, and division.
 * It only works with 32-bit signed integers.
 * Author: A. G. Medrano-Chavez
 */

#include <stdio.h>
#include <stdlib.h>

/** @brief Funcion que busca los numeros pares de una matriz.
 *  @param **MatrizA, matriz que recibe del usuario
 *  @param tam, tamaño de la matriz
 *  @return vector_pares[], regresa un vector con los numeros pares de la matriz.
*/
int *sep_pares(int **matrizA, int tam);

/** @brief Busca los elementos primos dentro de una matriz cuadrada y los guarda dentro de un arreglo
 *  @param mat es la matriz de entrada
 *  @param tam es el tamanio de la matriz
 *  @returns un arreglo con todos los numeros primos de la matriz
 */

int* sep_Primos(int **mat, size_t tam);

/** @brief Funcion que busca los numeros impares de una matriz.
 *  @param **MatrizA, matriz que recibe del usuario
 *  @param tam, tamaño de la matriz
 *  @return vector_pares[], regresa un vector con los numeros pares de la matriz.
*/
int *sep_impares(int **mat, size_t dim);