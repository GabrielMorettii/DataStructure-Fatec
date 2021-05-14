#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura=0, maior=0, menor=0, media=0;
    int numh=0, numM=0;
    char sex;

    for(int i = 1; i <= 15; i++){

        printf("Digite a sua altura: ");
        scanf("%f", &altura);

        printf("[h]Masculino\n");
        printf("[m]Feminino\n");
        printf("Digite seu sexo: ");
        getchar();
        scanf("%c", &sex);

        if(sex == 'h'){
            numh++;
        }else if(sex == 'm'){
            media += altura;
            numM++;
        }if(menor == 0){
            menor = altura;
        }else if(menor > altura){
            menor = altura;
        }if(maior < altura){
            maior = altura;
        }

    }

    media = media / numM;

    printf("A maior altura e: %.2f\n", maior);
    printf("A menor altura e: %.2f\n", menor);
    printf("A media da altura das mulheres e: %.2f\n", media);
    printf("o numero de homens e: %d\n", numh);

    return 0;
}
