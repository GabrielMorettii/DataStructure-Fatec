#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, r=0;

    printf("Digite o salario do funcionario: \n");
    scanf("%d", &s);

    if(s<=500){
        r = s * 1.3;
        printf("O salario de %d aumentou para %d\n", s, r);
    }else{
        printf("O funcionario nao tem direito ao aumento de salario!!!\n");
    }
}
