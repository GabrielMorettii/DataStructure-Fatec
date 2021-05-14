#include <stdio.h>
#define N 5
#define ERRO 1

struct TipoNodo{
    int codigo;
    char nome[10];
    float valor;
};

typedef struct TipoNodo TipoNodo;

int menuOperacoes(void);

int inserirInicioVetor(int inicioArranjo, int finalArranjo, int *iniciolista, int *finalLista, TipoNodo ListaLinear[], TipoNodo informacoesNodoInserir);

int mostrarElementosVetor(int inicioArranjo, int finalArranjo, int inicioLista, int finalLista, TipoNodo ListaLinear[]);


int main(){
    TipoNodo ListaLinear[N], informacoesNodoInserir;
    int inicioArranjo = 0, finalArranjo = N-1, inicioLista = -1, finalLista, opcaoMenu = 1;
    while(opcaoMenu != 0){

        opcaoMenu = menuOperacoes();
        switch(opcaoMenu)
        {
        case 1:
            printf("\n----Informacoes a serem inseridas----\n");
            printf("Codigo: ");
            scanf("%d", &informacoesNodoInserir.codigo);
            printf("Nome: ");
            scanf("%s", informacoesNodoInserir.nome);
            printf("Valor: ");
            scanf("%f", &informacoesNodoInserir.valor);
            if(inserirInicioVetor(inicioArranjo, finalArranjo, &inicioLista, &finalLista, ListaLinear, informacoesNodoInserir))
                printf("\n----Lista Cheia! Não foi possivel inserir!!!----\n");
            break;
        case 2:
            mostrarElementosVetor(inicioArranjo, finalArranjo, inicioLista, finalLista, ListaLinear);
            break;
        case 0:
            printf("\n----Obrigado por usar a nossa lista!!!----\n");
            break;
        default:
            printf("\n----Opcao Invalida!!!----\n");
            break;
        }
    }
}

int menuOperacoes(void){
        int opcaoMenu;
        printf("\n\n######## MENU ########\n");
        printf("# [1] Inserir no Inicio #\n");
        printf("# [2] Mostrar Elementos #\n");
        printf("# [0] Sair #\n");
        printf("########################\n");
        printf("Escolha uma opcao:");
        scanf("%d", &opcaoMenu);
        return opcaoMenu;

}

int inserirInicioVetor(int inicioArranjo, int finalArranjo, int *inicioLista,
int *finalLista, TipoNodo ListaLinear[], TipoNodo informacoesNodoInserir){

    int i;
    if((inicioArranjo == *inicioLista) && (finalArranjo == *finalLista))
        return ERRO;
    else{
        if(*inicioLista == -1)
         *inicioLista = *finalLista = inicioArranjo;
        else if(*inicioLista > inicioArranjo)
            *inicioLista = *inicioLista-1;
        else{
            for(i=*finalLista; i>=*inicioLista; i--)
                ListaLinear[i+1] = ListaLinear[i];
            *finalLista = *finalLista + 1;
        }
        ListaLinear[*inicioLista] = informacoesNodoInserir;
    }
    return 0;
}

int mostrarElementosVetor(int inicioArranjo, int finalArranjo, int inicioLista, int finalLista, TipoNodo ListaLinear[]){

    int i;
    for(i=inicioArranjo; i<finalArranjo; i++){
        if(i>=inicioLista && i<=finalLista && inicioLista>= 0)
            printf("%4d\t%s\t%7.2f\n", ListaLinear[i].codigo, ListaLinear[i].nome, ListaLinear[i].valor);
        else
            printf("-------------\n");
    }
    return 0;
}
