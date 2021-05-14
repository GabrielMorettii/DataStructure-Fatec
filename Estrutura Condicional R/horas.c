#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cd, nt, exc, st;
    printf("Digite o codigo do funcionario: ");
    scanf("%d", &cd);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &nt);
    if(nt>50){
        exc = (nt-50)*20.00;
    }else{
        exc = 0;
    }
    st = nt*10.00;
    printf("Salario total = R$%d\nSalario excedente: R$%d\n", st+exc, exc);
}
