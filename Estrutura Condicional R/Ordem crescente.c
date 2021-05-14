#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Digite tres valores valor: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a > b && b > c){
        printf("Os valores em ordem sao: %.2f, %.2f, %.2f \n", c, b, a);
    }else if(a > c && c > b){
        printf("Os valores em ordem sao: %.2f, %.2f, %.2f \n", b, c, a);
    }else if(b > a && a > c){
        printf("Os valores em ordem sao: %.2f, %.2f, %.2f \n", c, a, b);
    }else if(b > c && c > a){
        printf("Os valores em ordem sao: %.2f, %.2f, %.2f \n", a, c, b);
    }else if(c > b && b > a){
        printf("Os valores em ordem sao: %.2f, %.2f, %.2f \n", a, b, c);
    }else if(c > a && a > b){
        printf("Os valores em ordem sao: %.2f, %.2f, %.2f \n", b, a, c);
    }else{
        printf("Valor inválido");
    }
}
