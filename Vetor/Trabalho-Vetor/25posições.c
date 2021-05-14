//1.	Faça um programa que preenche 1 vetor de 25 posições, crie outro vetor com o triplo dos valores do vetor preenchido.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 25

int main()
{
    int vetorX[N], vetorTriplo[N];

    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {

        vetorX[i] = rand() % 25;
        vetorTriplo[i] = vetorX[i] * 3;
    }

    for(int i = 0; i < N; i++)
    {
        printf("vetorX[%d] = %d  --> vetorTriplo[%d] = %d \n", i, vetorX[i], i, vetorTriplo[i]);
    }
}
