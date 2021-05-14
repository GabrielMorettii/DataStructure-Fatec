#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op = 1, valorA, valorB, maior, menor;
    while(op >= 1){
        printf("Digite um valor A: ");
        scanf("%d", &valorA);
        printf("Digite um valor B: ");
        scanf("%d", &valorB);
        if(valorA>valorB && valorB>=0){
            maior = valorA;
            menor = valorB;
            printf("Maior %d\n", maior);
            printf("Menor %d\n", menor);
        }else if(valorA<valorB && valorA>=0){
            maior = valorB;
            menor = valorA;
            printf("Maior %d\n", maior);
            printf("Menor %d\n", menor);
        }else if(valorA < 0 || valorB < 0){
            printf("Esse valor e menor que 0\n");
        }else{}
        printf("Deseja continuar a operacao?:");
        scanf("%d", &op);
    }
    return 0;
}
