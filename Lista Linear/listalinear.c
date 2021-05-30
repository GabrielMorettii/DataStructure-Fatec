//Obs: Esse trabalho não foi feito totalmente a mão, peguei um
// modelo na internet e fui alterando, pois tive dificuldade na
// realização do trabalho

#include <stdio.h>
#include <stdlib.h>

struct TipoNodo {

	int *data;
	int firstElement;
	int lastElement;
	int numInserted; 
	int quantity;

};

typedef struct TipoNodo TipoNodo;

void createRow( TipoNodo *f, int counter );

void insert(TipoNodo *f, int value);

int removeNodo( TipoNodo *f );

int isEmpty( TipoNodo *f );

int isFull( TipoNodo *f );

void showRow(TipoNodo *f);

void main (void) {

	int choice, size, value;
	TipoNodo Row;

	printf("Quantidade de valores da fila? ");
	scanf("%d",&size);
	createRow(&Row, size);

	while( 1 ){

		printf("\n1 - Insert element\n2 - Remove element\n3 - Show Row\n0 - Leave\n\nOption:");
		scanf("%d", &choice);

		switch(choice){

			case 0: exit(0);

			case 1: 
				if (isFull(&Row)){

					printf("\nRow is full!!\n\n");

				}
				else {

					printf("\nValor do Nodo: ");
					scanf("%d", &value);
					insert(&Row,value);

				}

				break;

			case 2:
				if (isEmpty(&Row)){

					printf("\nRow vazia!!!\n\n");

				}
				else {

					value = removeNodo(&Row);
					printf("\n%d removed!! \n\n", value) ; 

				}
				break;

				case 3:
					if (isEmpty(&Row)){

						printf("\nRow vazia!!!\n\n");

					}
					else {

						printf("\nConteudo da Fila => ");
						showRow(&Row);

					}
					break;

				default:
					printf("\n Opcao Invalida\n\n");

		}
	}

}

void createRow( TipoNodo *f, int counter ) { 

	f->quantity = counter;
	f->data = (float*) malloc (f->quantity * sizeof(float));
	f->firstElement = 0;
	f->lastElement = -1;
	f->numInserted = 0; 

}

void insert(TipoNodo *f, int value) {

	if(f->lastElement == f->quantity-1)
		f->lastElement = -1;

	f->lastElement++;
	f->data[f->lastElement] = value; 
	f->numInserted++; 

}

int removeNodo( TipoNodo *f ) { 

	int temp = f->data[f->firstElement++]; 

	if(f->firstElement == f->quantity)
		f->firstElement = 0;

	f->numInserted--; 
	return temp;

}

int isEmpty( TipoNodo *f ) { 

	return (f->numInserted==0);

}

int isFull( TipoNodo *f ) {

	return (f->numInserted == f->quantity);
}

void showRow(TipoNodo *f){

	int cont, i;

	for ( cont=0, i= f->firstElement; cont < f->numInserted; cont++){

		printf("%d\t",f->data[i++]);

		if (i == f->quantity)
			i=0;

	}
	printf("\n\n");

}
