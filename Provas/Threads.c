#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>

#define NUM_THREAD 5

void *funcao(void * arg){
    int *pvalor;
    pvalor = arg;
}
int main(){
    pthread_t threads [NUM_THREAD];
    int i, arg [NUM_THREAD];

        for(i = 0; i < NUM_THREAD; i++){
                  switch(i)
        {
            case 0:
            arg[i] = i + i;
            printf("o valor de %d + %d = %i \n", i, i, arg[i]);
            break;
            case 1:
            arg[i] = i - i;
            printf("o valor de %d - %d = %i \n", i, i, arg[i]);
            break;
            case 2:
            arg[i] = i * i;
            printf("o valor de %d * %d  = %i \n", i, i, arg[i]);
            break;
            case 3:
            arg[i] = i / i;
            printf("o valor de %d / %d  = %i \n", i, i, arg[i]);
            break;
            case 4:
            arg[i] = pow(i, i);
            printf("o valor de %d ^ %d  = %i \n", i, i,arg[i]);
            break;
        }
            arg[i] = i + 1;
            pthread_create(&threads [i], NULL, funcao, (void*)&arg[i]);

            }
    for (i = 0; i < NUM_THREAD; i++)
        pthread_join(threads [i], NULL);

    printf("\n");
    return 0;
}
