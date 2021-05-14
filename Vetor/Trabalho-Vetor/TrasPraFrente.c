// Faça um programa que preenche 1 vetor de 50 posições, agora preencha o vetor 2
// com os valores de trás para frente. Ou seja, o primeiro valor do vet1 será o último do vet2. Calcule e imprima os 2 vetores.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 50

int main()
{
    int vet1[N], vet2[N];

    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {
        vet1[i] = rand() % 50;

    }
    int c = 0;
    for(int i = N-1; i >= 0; i--)
    {
       vet2[c] = vet1[i];
       c++;
    }
    for(int i = 0; i < N; i++)
    {
        printf("vet1[%d] = %d || vet2[%d] = %d\n", i, vet1[i], i, vet2[i]);
    }
}

