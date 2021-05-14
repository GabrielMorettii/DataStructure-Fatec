#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#define N 5000

int main(){
    float vetor[N], raiz;
    srand(time(NULL));
    for(int i = 0; i < N; i++){
       vetor[i] = rand() % 5000;
       printf("A raiz quadrada de [%.0f] -> %.2f", vetor[i], sqrt(vetor[i]));
       printf("\n");
    }
    return 0;
}
