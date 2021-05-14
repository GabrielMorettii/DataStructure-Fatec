#include <stdio.h>

int maior_menor(int num1, int num2, int *maior, int *menor);

int main()
{
    int num1, num2, *menor, *maior;

    printf("Digite um numero:");
    scanf("%d", &num1);
    printf("Digite outro numero:");
    scanf("%d", &num2);
    maior_menor(num1, num2, &maior, &menor);
    printf("O maior e: %d\n", *maior);
    printf("O menor e: %d ", *menor);

    return 0;
}

int maior_menor(int num1, int num2, int *maior, int *menor){
    if(num1 > num2){
        *maior = num1;
        *menor = num2;
    }else{
        *maior = num2;
        *menor = num1;
    }
}
