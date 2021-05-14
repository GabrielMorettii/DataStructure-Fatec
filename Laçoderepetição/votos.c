#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1 = 1, val[6];
    float porcent[2], total;

    val[0] = 0;
    val[1] = 0;
    val[2] = 0;
    val[3] = 0;
    val[4] = 0;
    val[5] = 0;


    while(num1 > 0){
        printf("1,2,3,4 Votos para os respectivos candidatos\n");
        printf("5 Voto Nulo\n");
        printf("6 Voto em Branco\n");
        printf("0 Cancelar\n");
        printf("Digite o codigo: ");
        scanf("%d", &num1);

        if(num1 == 1) val[0]++;
        else if(num1 == 2) val[1]++;
        else if(num1 == 3) val[2]++;
        else if(num1 == 4) val[3]++;
        else if(num1 == 5) val[4]++;
        else if(num1 == 6) val[5]++;

    }

    total = val[0] + val[1] + val[2] + val[3] + val[4] +  val[5];

    porcent[1] =  val[4]/ total;
    porcent[2] =  val[5]/ total;

    printf("Votos para o candidato 1: %d\n", val[0]);
    printf("Votos para o candidato 2: %d\n", val[1]);
    printf("Votos para o candidato 3: %d\n", val[2]);
    printf("Votos para o candidato 4: %d\n", val[3]);
    printf("Votos nulos: %d\n", val[4]);
    printf("Votos em branco: %d\n", val[5]);
    printf("Porcentagem de votos nulos: %.2f\n", porcent[1]);
    printf("Porcentagem de votos em branco: %.2f\n", porcent[2]);


    return 0;
}
