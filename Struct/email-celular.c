#include <stdio.h>
#include <string.h>

struct DadosPessoais{
    char nome[20], email[50];
    char celular[20];
};

int main(){
    struct DadosPessoais agenda[5];

    for(int i=0; i<1; i++){

        printf("Digite um nome:");
        scanf("%s", agenda[i].nome);

        printf("Digite o email:");
        scanf("%s", agenda[i].email);

        printf("Digite o telefone:");
        scanf("%s", &agenda[i].celular);

        printf("\n");
    }

    for(int i=0; i<1; i++){

        printf("Nome: %s\n", agenda[i].nome);

        printf("Email: %s\n", agenda[i].email);

        printf("Telefone: %s\n\n", agenda[i].celular);
    }
    return 0;
}


