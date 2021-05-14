#include <stdio.h>
#include <time.h>
#define cont 400

float Desconto10(float totalgasto);
float DuasVezes(float totalgasto);
float DezVezes(float totalgasto);


int main(){

    float totalgasto;
    int op;

    printf("Digite o total gasto na loja:");
    scanf("%f", &totalgasto);
    printf("\nOpcao de Pagamento: \n");
    printf("[1] a vista com 10%% de desconto \n[2] em duas vezes tem um aumento de 3%% \n");
    printf("[3] em 10 vezes com 5%% de juros(somente para compras acima de R$100,00): ");
    scanf("%d", &op);

    switch (op){

        case 1:
            totalgasto = Desconto10(totalgasto);
            printf("\nO total gasto e: %.2fR$\n", totalgasto);
            break;
        case 2:
            totalgasto = DuasVezes(totalgasto);
            printf("\nO total gasto e: %.2fR$\n", totalgasto);
            break;
        case 3:
            totalgasto = DezVezes(totalgasto);
            if(totalgasto == -1){
                break;
            }
            printf("\nO total gasto e: %.2fR$\n", totalgasto);
            break;
    }

    return 0;
}


float Desconto10(float totalgasto){

    totalgasto *= 0.9;

    return totalgasto;
}

float DuasVezes(float totalgasto){

    totalgasto *= 1.03;

    return totalgasto;
}

float DezVezes(float totalgasto){

    if(totalgasto > 100){
        totalgasto *= 1.05;
    }else{
        printf("\nO valor da compra tem que ser maior que 100\n");
        return -1;
    }

    return totalgasto;
}
