//5.	Faça uma função que preencha 2 vetores com 10 valores de
//inteiros, crie um vet3 e preencha com os valores alternados
//(vet3[0]=vet1[0]; vet3[1]=vet2[0]...).


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int main()
{
    int vet1[N], vet2[N], vet3[N];

    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {
        vet1[i] = rand() % 50;
        vet2[i] = rand() % 10;

    }
    for(int i = 0; i < N; i++)
    {
        vet3[i] = vet1[i];

        if(i % 2 == 0){
            vet3[i] = vet2[i];
        }
    }
    for(int i = 0; i < N; i++)
    {
        printf("vet1[%d] = %d - vet2[%d] = %d - vet3[%d] = %d \n", i, vet1[i], i, vet2[i], i, vet3[i]);
    }

}

