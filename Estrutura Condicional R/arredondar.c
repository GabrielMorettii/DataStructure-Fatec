#include <stdio.h>
 #include <locale.h>

 int main()
 {
     float numero;
     int copia;

     printf("Digite um numero:");
     scanf("%f", &numero);

     copia = numero;
     if((numero - copia) >= 0.5){
        printf("O inteiro diretamente superior ao n�mero e: %d", ++copia);
     }else if((numero - copia) < 0.5){
        printf("O inteiro diretamente inferior ao n�mero e: %d", copia);
     }else{
        printf("Valor inv�lido");
     }

     return 0;
 }
