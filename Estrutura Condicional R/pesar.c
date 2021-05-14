 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    int peso, exc, multa;

    printf("Digite a quantidade em quilos de peixes pescado:");
    scanf("%d", &peso);
    if(peso > 50){
        exc = peso - 50;
        multa = exc * 4;
        printf("Voce excedeu a quantidade de peixes em %dKg!\n", exc);
        printf("Voce tera que pagar uma multa no valor de %dR$\n", multa);
    }else if(peso <= 50){
        printf("A quantidade esta dentro da permitida!\n Excesso: 0Kg, Multa: 0R$");
    }else{
        printf("Valor inválido");
    }
 }
