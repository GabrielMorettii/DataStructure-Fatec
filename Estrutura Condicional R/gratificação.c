#include <stdio.h>
#include <stdlib.h>

int main()
{
   float horas, faltas, minutos, gratificacao;

    printf("Digite o numero de horas extras que possui:");
    scanf("%f", &horas);
    printf("Digite o numero de horas que faltou ao trabalho:");
    scanf("%f", &faltas);
    minutos = (horas - ((horas - faltas) * 2/3)) * 60;
    if(minutos > 2400){
        printf("A sua gratificacao e de: 500R$");
    }else if(1800 < minutos && minutos < 2400){
        printf("A sua gratificacao e de: 400R$\n");
    }else if(1200 < minutos && minutos < 1800){
        printf("A sua gratificacao e de: 300R$");
    }else if(600 <= minutos && minutos < 1200){
        printf("A sua gratificacao e de: 200R$");
    }else if(minutos < 600){
        printf("A sua gratificacao e de: 100R$");
    }else{
        printf("Valor inválido");
    }
}
