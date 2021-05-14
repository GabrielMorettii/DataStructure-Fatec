#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, s, r=0;
    printf("Digite o codigo do funcionario (1 ate 5): \n");
    scanf("%d", &codigo);
    printf("Digite o salario do funcionario): \n");
    scanf("%d", &s);

    if(codigo==1){
        r = s*1.5;
        printf("O cargo e Escriturario e um recebera aumento de 50 porcento do salario! \n");
        printf("Salario de %d vai para %d \n", s, r);
    }else if(codigo==2){
        r = s*1.35;
        printf("O cargo e Secretario e um recebera aumento de 35 porcento do salario! \n");
        printf("Salario de %d vai para %d \n", s, r);
    }else if(codigo==3){
        r = s*1.2;
        printf("O cargo e Caixa e um recebera aumento de 20 porcento do salario! \n");
        printf("Salario de %d vai para %d \n", s, r+1);
    }else if(codigo==4){
        r = s*1.1;
        printf("O cargo e Gerente e um recebera aumento de 10 porcento do salario! \n");
        printf("Salario de %d vai para %d \n", s, r);
    }else if(codigo==5){
        printf("O cargo e Direto e nao recebera aumento de salario! \n");
    }else{
        printf("Nao existe esse Cargo!!! \n");
    }
}
