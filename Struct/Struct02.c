#include <stdio.h>
#include <string.h>
struct Agenda
{​​​​​
char nome[12];
char email[25];
char telefone[12];
}​​​​​;
int menu();
int inserirPessoasAgenda(struct Agenda vetorAgenda[], int *qtd);
int mostrarAgenda(struct Agenda vetorAgenda[], int qtd);
int buscarPessoaAgenda(struct Agenda vetorAgenda[], int qtd, char nome[]);
int main()
{​​​​​
struct Agenda vetorAgenda[10];
int op = 1, qtd=0;;
while (op != 0)
{​​​​​
op = menu();
switch (op)
{​​​​​
    case 1:
if(inserirPessoasAgenda(vetorAgenda, &qtd))
printf("Vetor cheio!!!\n");
else
printf("Inserido com sucesso!!!\n");
break;
    case 2:
mostrarAgenda(vetorAgenda, qtd);
break;
    case 3:
printf("Buscando...\n");
buscarPessoaAgenda(vetorAgenda, qtd, nome);
break;
case0:
printf("Tchau!!!\n");
break;
default:
printf("Opção inválida!!!\n");
break;
}​​​​​
}​​​​​
}​​​​​
int menu(){​​​​​
int op;
printf("======MENU=======\n");
printf("[1]Inserir\n");
printf("[2]Mostrar\n");
printf("[3]Buscar\n");
printf("[0]Sair\n");
printf("Escolha uma opção: \n");
scanf("%d",&op);
return op;
}​​​​​

int inserirPessoasAgenda(struct Agenda vetorAgenda[], int *qtd){​​​​​
if(*qtd<10){​​​​​
printf("Nome....: ");
scanf("%s",vetorAgenda[*qtd].nome);
printf("E-mail..: ");
scanf("%s",vetorAgenda[*qtd].email);
printf("Telefone: ");
scanf("%s",vetorAgenda[*qtd].telefone);
}​​​​​
else
return1;
(*qtd)++;
return0;
}​​​​​
int mostrarAgenda(struct Agenda vetorAgenda[], int qtd){​​​​​
int i;
printf("======AGENDA======\n");
for (i = 0; i < qtd; i++){​​​​​
printf("%s - %s - %s\n", vetorAgenda[i].nome,vetorAgenda[i].email,vetorAgenda[i].telefone);
}​​​​​
return0;
}​​​​​
int buscarPessoaAgenda(struct Agenda vetorAgenda[], int qtd, char nome[]){​​​​​
//if(strcmp(vetorAgenda[i],busca)==0)
// achei!!!
return0;
}​​​​​
