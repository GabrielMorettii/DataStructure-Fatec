//9.	Faça um programa que preenche uma matriz A(6,4)
// e imprima a soma dos seus elementos por linha.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    int A[6][4], linha[6];


    srand(time(NULL));

    for(int i = 0; i < 6; i++)
    {
        linha[i] = 0;
        for(int c = 0; c < 4; c++){
            A[i][c] = rand() % 50;
            linha[i] += A[i][c];
            printf(" %d", A[i][c]);
        }
        printf("\n");
    }
     for(int i = 0; i < 6; i++){

        printf("\n A soma da linha[%d] = %d\n", i, linha[i]);

    }

}
