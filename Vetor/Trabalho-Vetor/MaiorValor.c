//Faça um programa que descubra o maior valor da matriz.
//Desafio: Preencha uma matriz 5x5, ordene e mostre a matriz ordenada.


#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 5

int main()
{
    int matriz[N][N], maiorvalor=0;
    srand(time(NULL));
    for(int i = 0; i < N; i++){

        for(int c = 0; c < N; c++){
            matriz[i][c] = rand() % 200;
            printf("% d",  matriz[i][c]);

            if(matriz[i][c] > maiorvalor){
                maiorvalor = matriz[i][c];
            }
        }
        printf("\n");
    }

    printf("\nO maior valor da matriz e = %d", maiorvalor);

}
