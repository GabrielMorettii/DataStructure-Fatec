#include <stdio.h>

float ordem(float *ord1, float*ord2, float*ord3);

int main()
{
    float num1, num2, num3;

    ordem(&num1, &num2, &num3);
     if(num1 > num2 && num1 > num3 && num2 > num3){
         printf("Ordem crescente : %.1f / %.1f / %.1f", num1, num2, num3);
    }else if(num1 > num2 && num1 > num3 && num3 > num2)
    {
         printf("Ordem crescente : %.1f / %.1f / %.1f", num1, num3, num2);
    }else if(num2 > num1 && num2 > num3 && num3 > num1)
    {
         printf("Ordem crescente : %.1f/ %.1f /%.1f", num2, num3, num1);
    }else if(num2 > num3 && num2 > num1 && num1 > num3)
    {
         printf("Ordem crescente : %.1f / %.1f/ %.1f", num2, num1, num3);
    }else if(num3 > num2 && num3 > num1 && num1 > num2)
    {
        printf("Ordem crescente : %.1f / %.1f / %.1f", num3, num1, num2);
    }else if(num3 > num1 && num3 > num2 && num2 > num1)
    {
        printf("Ordem crescente : %.1f / %.1f / %.1f", num3, num2, num1);
    }else{
        printf("Valor invalido");
    }

    return 0;

}

float ordem(float *ord1, float*ord2, float*ord3)
{
    *ord1 = 1;
    *ord2 = 2;
    *ord3 = 3;
}
