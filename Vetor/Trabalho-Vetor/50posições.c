//1.	Faça um programa que preenche 2 vetores de 50 posições, calcule e retorne  a soma dos valores dos vetores.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define N 50

int main()
{
    int vetorA[N], vetorB[N];

    srand(time(NULL));
    for(int i = 0; i < N; i++){

        vetorA[i] = rand() % 50;
        vetorB[i] = rand() % 100;
    }

    for(int i = 0; i < N; i++){
        printf("vetorA[%d] = %d +  vetorB[%d] = %d --> %d\n", i, vetorA[i], i, vetorB[i], vetorA[i] + vetorB[i]);
    }
}
