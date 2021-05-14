#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int maximo, cont, i;

    printf("Digite o numero maximo(impar): ");
    scanf("%d", &maximo);

    if (maximo % 2 == 0)exit(0);

     cont = (maximo - 1)/2;
     for(i = 0; i <= cont; i++){
         for(int linha = 1; linha <= i; linha++){
        printf(" ");
    }
          for (int coluna = i+1; coluna <= maximo-i; coluna++){
              printf("%d",coluna);
          }
          printf("\n");
    }
    return 0;
}
