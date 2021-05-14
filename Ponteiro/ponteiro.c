#include <stdio.h>
#include <stdlib.h>

void trocar(float *num1, float *num2);

int main()
{
    float num1, num2;
    num1 = 2.3;
    num2 = 5.4;

    printf("Numero 1: %g Numero 2: %g\n", num1, num2);

    trocar(&num1, &num2);

    printf("Numero 1: %g Numero 2: %g", num1, num2);
    return 0;
}

void trocar(float *num1, float *num2){

    *num1  = 10.5;
    *num2 = 20.3;
}
