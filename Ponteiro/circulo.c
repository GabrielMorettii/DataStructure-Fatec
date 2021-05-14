#include <stdio.h>

float areadocirculo(float raio, float *area);

int main()
{
    float raio, area;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    areadocirculo(raio, &area);
    printf("O calculo e: %.2f", area);
}

float areadocirculo(float raio, float *area)
{
    float pi=3.14;

    *area = pi * raio*raio;
}
