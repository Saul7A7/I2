#include <stdio.h>
#include <stdlib.h>
#include "..\include\SeparadorParImpPrim.h"

int** create_square_matrix(size_t dim);
void llenar(int **, size_t, int);
void imprimir(int **M, size_t Dim);
int impares(int **Ma, int Dim);
int primos(int **Ma, int Dim);
int pares(int **Ma, int Dim);
void imprimir_M(int **M,int Dim);
void imprimir_A(int *Ar, int Dim);


int main(int argc, char const *argv[]){

    size_t Dimension = atoi(argv[1]);
    int coso_para_random = atoi(argv[2]);

    int **Matriz = create_square_matrix(Dimension);
    llenar(Matriz, Dimension, coso_para_random);
    printf("\nLa matriz ingresada es: \n\n");
    imprimir_M(Matriz, Dimension); 

   int opcion;
   int opcion2;
    int op;
   do{
        do{
            printf("\nQue deseas hacer:  ");
            printf("\n\n---------------Menu---------------\n");
            printf("---- Mostrar Numeros Pares-----------1\n");
            printf("---- Mostrar Numeros Impares---------2\n");
            printf("---- Mostrar Numeros Primos----------3\n");
            printf("---- Salir---------------------------0\n");
            printf("--------------------------------------\n");
            printf("\nOpcion:  ");
            scanf("%d",&opcion);
            if(opcion < 0 || opcion > 3){
                printf("\n\nOpcion incorrecta, Vuelve a intentarlo");
            }
        }while(opcion < 0 || opcion > 3);
        
        switch (opcion){
            case 0:
                exit(0);
            break;
            case 1:
                printf("\n");
                int* resultado;
                resultado = sep_pares(Matriz,Dimension);
                printf("\n\n");
                int i = 0;
                do{
                    printf("[%i]",resultado[i]);
                        i++;
                }while(resultado[i] != 0);
                printf("\n\n");
            break;
            case 2:
                printf("\n");
                int* resultado2;
                resultado2 = sep_impares(Matriz,Dimension);
                printf("\n\n");
                int j = 0;
                do{
                    printf("[%i]",resultado2[j]);
                        j++;
                }while(resultado2[j] != 0);
                printf("\n\n");
            break;
            case 3:
                printf("\n");
                int* resultado3;
                resultado3 = sep_primos(Matriz,Dimension);
                printf("\n\n");
                int k = 0;
                do{
                    printf("[%i]",resultado3[k]);
                        k++;
                }while(resultado3[k] != 0);
                printf("\n\n");
            break;
        }
        do{        
            printf("\nQuieres volver a usar el sistema\n");
            printf("\nSi---------------------------------1\n");
            printf("No---------------------------------2\n");
            printf("\nOpcion:  ");
            scanf("%d",&op);
            if(op < 1 || op >2){
                printf("\n\nOpcion Incorrecta, Vuelve a intentarlo\n\n");
            }
        }while(op < 1 || op > 2);
   }while(op == 1);

    printf("\n\n");    
return 0;
}

void llenar(int **M, size_t Dim, int seed){
    srand(seed);
    for(int i=0; i<Dim; i++){
        for(int j=0; j<Dim; j++){
            M[i][j]=rand()%seed;
           //scanf("%d",M[i][j]);
        }
    }
}
//funciones
int** create_square_matrix(size_t dim) {
  int** mat = (int **)malloc(dim * sizeof(int *)); 
  for (size_t i = 0; i < dim; i++)
    mat[i] = (int *)malloc(dim * sizeof(int));
  return mat;
}

void imprimir_A(int *Ar, int Dim){
    printf("El arreglo de numero impares es: \n");
    for(int i=0; i<Dim; i++){
        printf("[%i] ", Ar[i]);
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