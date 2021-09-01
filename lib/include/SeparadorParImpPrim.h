<<<<<<< HEAD
/** Esta biblioteca contiene 3 funciones de busqueda sobre una matrix cuadrada: 
 * buscar numeros pares, buscar numeros impares y buscar numeros primos.
 * Cada busqueda se guarda en un arreglo cuyo elemento final es el numero 0,
 * esto para delimitar el limite del arreglo.
 * Cada funcion regresa una variable tipo int* que apunta al primer
 * elemento del arreglo.
 * Author: 
=======
/** Esta biblioteca sirve para separar los elementos de una
 * matriz de numeros enteros en pares, impares y primos. 
 * Al terminar las funciones devuelven un arreglo con los 
 * elementos correcpondientes.
>>>>>>> b388c9560acf0a0c470b6017d98218fcff634b85
 */

#include <stdio.h>
#include <stdlib.h>

/** @brief Funcion que busca los numeros pares de una matriz.
 *  @param **MatrizA, matriz que recibe del usuario
 *  @param tam, tamaño de la matriz
 *  @return vector_pares[], regresa un vector con los numeros pares de la matriz.
*/
int *sep_pares(int **matrizA, size_t tam);

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
int *sep_impares(int **mat, size_t tam);