#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MESES 2
#define PRODUTOS 5
#define MERCADOS 5


void preencher(float A[MESES][MERCADOS][PRODUTOS]);
void mostrarMatriz(float A[MESES][MERCADOS][PRODUTOS]);
void somarLinhaeColuna(float A[MESES][MERCADOS][PRODUTOS]);

int main()
{
    srand(time(NULL));

    float A[MESES][MERCADOS][PRODUTOS];

    preencher(A);
    mostrarMatriz(A);
    somarLinhaeColuna(A);
    mostrarMatriz(A);

    return 0;
}

void preencher(float A[MESES][MERCADOS][PRODUTOS]){

    for(int m = 0; m < MESES; m++){

        A[m][4][4] = 0;

        for (int i = 0; i < PRODUTOS-1; i++){

            A[m][i][4] = 0;
            A[m][4][i] = 0;

            for(int c=0; c < MERCADOS-1; c++){

                A[m][i][c] = rand()%50;

            }
    }

    }
}

void mostrarMatriz(float A[MESES][MERCADOS][PRODUTOS]){

     for(int m = 0; m < MESES; m++){

        for (int i=0; i < PRODUTOS; i++){

            for(int c = 0; c < MERCADOS; c++){

                printf("%g\t", A[m][i][c]);
            }

            printf("\n");
        }

        printf("\n");
    }
}

void somarLinhaeColuna(float A[MESES][MERCADOS][PRODUTOS]){


     for(int m = 0; m < MESES; m++){

        A[m][4][4] = 0;

        for (int i=0; i < PRODUTOS-1; i++){

            A[m][i][4] = 0;
            A[m][4][i] = 0;

            for(int c = 0; c < MERCADOS-1; c++){

                A[m][i][4] += A[m][i][c];
                A[m][4][i] += A[m][c][i];
            }

        }

    }
}
