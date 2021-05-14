//6.	Faça um programa que preencha uma matriz
//A(4,5) e imprima os valores da diagonal principal.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    int A[4][5];

    srand(time(NULL));
    for(int i = 0; i < 4; i++)
    {
        for(int c = 0; c < 5; c++){
            A[i][c] = rand() % 50;
        }

    }
    printf("----------- Diagonal Principal ------------\n\n");
    for(int i = 0; i < 4; i++)
    {
        for(int c = 0; c < 5; c++){
           if(i==c){
            printf("A[%d][%d] = %d\n", i, c, A[i][c]);
           }
        }
    }
    printf("\n----------------------------------\n");
}

