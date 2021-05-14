//3.	Faça uma função que preencha um vetor vet[15] de inteiros, calcule e imprima a quantidade de valores pares em vet[15].


#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define N 15

void preencher();

int main()
{
    preencher();
}

void preencher(){

    int vet[N], pares;
    pares = 0;
    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {
        vet[i] = rand() % 15;
        if(vet[i] % 2 == 0){
            pares++;
        }
    }

    for(int i = 0; i < N; i++)
    {
       printf("vet[%d] = %d\n", i, vet[i]);
    }
    printf("\nA quantidade de valores pares = %d", pares);

}
