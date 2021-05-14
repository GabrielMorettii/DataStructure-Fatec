#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float indice, indice2, indice3, calc;
        printf("Digite o indice de poluicao do 1 grupo: ");
        scanf("%f", &indice);
        printf("Digite o indice de poluicao do 2 grupo: ");
        scanf("%f", &indice2);
        printf("Digite o indice de poluicao do 3 grupo: ");
        scanf("%f", &indice3);
        calc = indice+indice2+indice3;
        if(calc>=0.3&&calc<0.4){
            printf("As empresas do 1 grupo devem suspender suas atividades!!!\n");
        }else if(calc>=0.4&&calc<0.5){
            printf("As empresas do 1 e 2 grupo devem suspender suas atividades!!!\n");
        }else if(calc>=0.5){
            printf("As empresas de todos os grupos devem paralisar suas atividades!!!\n");
        }else{
            printf("As empresas estao com o nivel aceitavel!!!\n");
        }
}
