/**@brief A function, busca los numeros pares de una matriz.
 * @param **MatrizA, matriz que recibe del usuario
 * @param tam, tamaño de la matriz
 * @return vector_pares[], regresa un vector con los numeros pares de la matriz.
*/
#include "../include/SeparadorParImpPrim.h"
#include <stdio.h>
#include <stdlib.h>

int *Sep_pares(int **matrizA, int tam){   //function

	int *vector_pares = (int*)malloc(tam*sizeof(int)); 		  //reservamos memoria para el vector_pares
	int contador = 0;										  //inicializamos un contador para cada posición del vector_pares
	for(int i = 0; i < tam; i++){							  //recorremos la fila y columnas con los 2 for 
		for(int j = 0; j < tam; j++){
			if(matrizA[i][j] %2 == 0 && matrizA[i][j] !=0){	  //verificamos cada posición de la matriz si es un numero par
				vector_pares[contador] = matrizA[i][j]; 	  //guardamos cada numero par encontrado en la matriz en el vector_pares
				contador++;   								  //incrementamos en 1 el contador
			}
		}
	}
    vector_pares[contador] = 0; 							  //ingresamos un numero cero al ultimo para poder recorrel el arreglo completo
	return vector_pares;									   //regresamos el vector con los numeros pares
}

	
