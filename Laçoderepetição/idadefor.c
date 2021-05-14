#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, idade, faixa=0, faixa2=0, faixa3=0, faixa4=0, faixa5=0;
    for(int i=0; i<15; i++){
        printf("Digite a sua idade: ");
        scanf("%d", &idade);

    if(idade >= 1 && idade<=15){
        faixa++;
    }else if(idade>=16 && idade<=30){
        faixa2++;
    }else if(idade>=31 && idade<=45){
        faixa3++;
    }else if(idade>=46 && idade<=60){
        faixa4++;
    }else if(idade>=61 && idade<=150){
        faixa5++;
    }else{
        printf("Nao e uma idade");
    }
    }
        printf("\n-----Faixas Etarias----- \n");
    printf("\n 1 - 15 anos : %d / Percentual: %d ", faixa, 100*faixa/15);
    printf("\n 16 - 30 anos : %d / Percentual: %d ", faixa2, 100*faixa2/15);
    printf("\n 31 - 45 anos : %d / Percentual: %d ", faixa3, 100*faixa3/15);
    printf("\n 46 - 60 anos : %d / Percentual: %d ", faixa4, 100*faixa4/15);
    printf("\n maior que 60 anos : %d / Percentual: %d ", faixa5, 100*faixa5/15);

    return 0;
}
