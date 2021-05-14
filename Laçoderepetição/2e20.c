#include <stdio.h>

int main(){

    int num1, linha, coluna;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    for (linha = 1; linha <= num1; linha++) {
        for (coluna = 1; coluna <= linha; coluna++){
            printf("%d", coluna);
        }
        printf("\n");
    }

    for (linha -= 2; linha > 0; linha--) {
        for (coluna = 1; coluna <= linha; coluna++){
            printf("%d", coluna);
        }
        printf("\n");
    }
    return 0;
}
