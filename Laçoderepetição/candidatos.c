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
        printf("[n]N�o\n");
        printf("Possui experi�ncia no servi�o: ");
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

    printf("O n�mero de candidatos do sexo feminino �: %d\n", contf);
    printf("O n�mero de candidatos do sexo masculino �: %d\n", contm);
    printf("A idade m�dia dos homens que j� t�m experi�ncia no servi�o �: %.2f\n", media);
    printf("A porcentagem dos homens com mais de 45 anos entre o total dos homens �: %.2f\n", porcent);
    printf("O n�mero de mulheres com idade inferior a 35 anos e com experi�ncia no servi�o �: %d\n", contf35);
    printf("A menor idade entre as mulheres que j� t�m experi�ncia no servi�o �: %d\n", menor);

    return 0;
}
