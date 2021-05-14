#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 5

int main()
{
    int A[N], aux;
    srand(time(NULL));
    for (int i=0; i < N; i++){
        A[i] = rand()%100;
    }

    for (int i=0; i < N; i++){
       for (int j=i+1; j < N; j++){
            if(A[i] > A[j]){
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
    for (int i=0; i < N; i++){
        printf("%d\n", A[i]);
    }
    return 0;
}
