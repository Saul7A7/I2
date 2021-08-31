#include <stdio.h>
#include ".\lib\src\test_pares_matriz.c"

int** create_square_matrix(size_t dim);

int main(int argc, char* const argv[]){
	
	size_t tam = atoi(argv[1]);

	int **matriz = create_square_matrix(int tam);

	printf("\nRellene la matriz: \n\n");
	
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			scanf("%d",&matriz[i][j]);
		}


/*
	int** create_square_matrix(size_t dim){
		int** matrizA = (int**)malloc(tam * sizeof(int*));
		for(size_t i=0; i<tam; i++){
			matrizA[i] = (int*)malloc(dim * sizeof(int));
			return matrizA;
		}
	}*/

	


	/*
	int tam;
	printf("\nIngresa el tamaño de la matriz");
	scanf("%d",&tam);

	int matrizA[tam][tam];
	printf("\nRellene la matriz: \n\n");
	
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			scanf("%d",&matrizA[i][j]);
		}
	}*/
	//int matrizA[tam][tam];	
	
	int *vector = func_pares_matriz(matriz,tam);

	printf("\n");
	for(int i=0; i<sizeof(vector); i++){
		printf("Par: [%d] \n",vector[i]);
	}

	printf("\n\n--------------------------------------------------");
	
	int valor_vector = sizeof(vector);
	printf("\n\nEl valor del vector es:  %d",valor_vector);

	return 0;
}

int** create_square_matrix(size_t dim){
		int** matriz = (int**)malloc(tam * sizeof(int*));
		for(size_t i=0; i<tam; i++)
			matriz[i] = (int*)malloc(dim * sizeof(int));
		return matriz;
}
