#include <stdio.h>
#include <locale.h>

int main()
{

    int idade, contf=0, contf35=0, contexpm=0, menor=0;
    float contm=0, contm45=0, media=0, porcent;
    char sexo, exp;

    setlocale(LC_ALL,"");
    do{
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if(idade == 0){
            break;
        }
        printf("[m]Masculino\n");
        printf("[f]Feminino\n");
        printf("Digite seu sexo: ");
        getchar();
        scanf("%c", &sexo);

        printf("[s]Sim\n");
        printf("[n]Não\n");
        printf("Possui experiência no serviço: ");
        getchar();
        scanf("%c", &exp);
        printf("Obs: Caso queira encerrar o programa digite 0\n");

        if(sexo == 'f'){
            contf++;

            if(idade < 35 && exp == 's') contf35++;

            if(menor == 0){
                menor = idade;
            }else if(exp == 's' && menor > idade){
                menor = idade;
            }
        }
        else if(sexo == 'm'){
            contm++;

            if(exp == 's') {
              media += idade;
              contexpm++;
            }

            if(idade > 45) contm45++;
        }

    }while(idade > 0);

    media = media / contexpm;
    porcent = (contm45/contm) * 100;

    printf("O número de candidatos do sexo feminino é: %d\n", contf);
    printf("O número de candidatos do sexo masculino é: %d\n", contm);
    printf("A idade média dos homens que já têm experiência no serviço é: %.2f\n", media);
    printf("A porcentagem dos homens com mais de 45 anos entre o total dos homens é: %.2f\n", porcent);
    printf("O número de mulheres com idade inferior a 35 anos e com experiência no serviço é: %d\n", contf35);
    printf("A menor idade entre as mulheres que já têm experiência no serviço é: %d\n", menor);

    return 0;
}
