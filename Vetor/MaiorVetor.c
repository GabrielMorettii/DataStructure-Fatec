#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#define N 5

int main(){

    int vetorA[N], vetorB[N], vetorMaior[N];
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        vetorA[i] = rand() % 3200;
        vetorB[i] = rand() % 4000;

        if(vetorA[i] > vetorB[i]){
            vetorMaior[i] = vetorA[i];
        }else if(vetorB[i] > vetorA[i]){
            vetorMaior[i] = vetorB[i];
        }else{
            printf("Valor invalido");
        }
    }

    for(int i = 0; i < N; i++){
        printf("Vetor[A] =  %d  / Vetor[B] = %d  -> Maior = %d\n", vetorA[i], vetorB[i], vetorMaior[i]);
    }
    return 0;
}




//2o - Preencha 2 vetores de 5000 posições cada. Calcule e mostre o vetor 3 preenchido
//com o maior elemento de cada posição dos vetore 1 e 2
