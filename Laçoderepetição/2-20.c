#include <stdio.h>

int main(){

    int num1, linha, coluna;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    for (linha = 1; linha <= num1; linha++) {
        printf("%d", linha);
    }

    printf("\n");
    num1--;
    coluna=num1;

    for(int i = 1; i <= num1; i++){
        for(int l = 1; l <= i; l++){
            printf("x");
        }
        for(int c = 1; c <= coluna; c++){
            printf("%d", c);
        }
        coluna--;
        printf("\n");
    }
    return 0;
}
