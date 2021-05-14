//8.	Faça um programa que preenche uma matriz A(5,4)
//e imprima a soma dos seus elementos por coluna.


#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    int A[5][4], coluna[5];


    srand(time(NULL));
    for(int i = 0; i < 5; i++)
    {
        for(int c = 0; c < 4; c++){
            A[i][c] = rand() % 50;
             printf(" %d ",  A[i][c]);
        }
        printf("\n");
    }
     for(int c = 0; c < 4; c++){

        coluna[c] = 0;

        for(int i = 0; i < 5; i++){
            coluna[c] += A[i][c];
        }
        printf("\nA soma da coluna[%d] = %d\n", c, coluna[c]);

    }

}
