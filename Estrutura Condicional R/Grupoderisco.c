#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
	char risco;

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Grupo de risco com as seguintes variaveis b(Baixo), m(Medio, a(alto): ");
    getchar();
    scanf("%c", &risco);

    if(idade >=18 && idade <=24 && risco == 'b'){
		printf("\nO código do seguro e 7 \n");
    }else if (idade >=18 && idade <=24 && risco == 'm'){
		printf("\nO código do seguro e 8 \n");
    }else if (idade >=18 && idade <=24 && risco == 'a'){
		printf("\nO código do seguro e 9 \n");
    }else if (idade >=25 && idade <=40 && risco == 'b'){
		printf("\nO código do seguro e 4\n");
    }else if (idade >=25 && idade <=40 && risco == 'm'){
		printf("\nO código do seguro e 5\n");
    }else if (idade >=25 && idade <=40 && risco == 'a'){
		printf("\nO código do seguro e 6\n");
    }else if (idade >=41 && idade <=70 && risco == 'b'){
		printf("\nO código do seguro e 1 \n");
    }else if (idade >=41 && idade <=70 && risco == 'm'){
		printf("\nO código do seguro e 2 \n");
    }else if (idade >=41 && idade <=70 && risco == 'a'){
		printf("\nO código do seguro e 3 \n");
    }else{
        printf("\nIdade nao pertence aos segurados\n");
    }

    system("pause");
	return 0;
}
