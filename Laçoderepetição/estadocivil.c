#include <stdio.h>

int main(){

    float idade, media=0, porcent, numv=0, numc=0, nums=0, numd=0;
    char estc;

    for(int i = 1; i <= 20; i++){

        printf("\nDigite sua idade: ");
        scanf("%f", &idade);

        printf("[c]Casado\n");
        printf("[s]Solteiro\n");
        printf("[v]Viuvo\n");
        printf("[d]Separado\n");
        printf("Digite seu estado civil: ");
        getchar();
        scanf("%c", &estc);

        if(estc == 'c'){
            numc++;
        }else if(estc == 's'){
            nums++;
        }else if(estc == 'd'){
            numd++;
        }else if(estc == 'v'){
            media+=idade;
            numv++;
        }else {
            printf("Estado civil invalida: ");
        }
    }

    media = media / numv;
    porcent = numd / 20 * 100;

    printf("A quantidade de pessoas casadas e: %.2f\n", numc);
    printf("A quantidade de pessoas solteiras e: %.2f\n", nums);
    printf("A media das idades das pessoas viuvas e: %.2f\n", media);
    printf("A porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas analisadas e: %.2f\n", porcent);

    return 0;
}
