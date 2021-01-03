#include <stdio.h>
#include <stdlib.h>


typedef int Item;

typedef struct elemFila {
    Item item;
    struct elemFila *proximo;
    struct elemFila *anterior;
} ElemFila;

typedef struct {
    ElemFila *primeiro;
    ElemFila *ultimo;
} Fila;


void inicializaDeque(Fila *fila){
  fila->primeiro = NULL;
  fila->ultimo = NULL;
}


void libereDeque(Fila *fila) {
    ElemFila *aux;
    int i=0;

    if (fila->primeiro == NULL) {
        printf("0\n");
        return;
    }
    else{
      while (fila->primeiro != NULL) {
        // Armazena o primeiro elemento da lista encadeada que representa a
        // fila e remove este primeiro elemento da lista
        aux = fila->primeiro;
        fila->primeiro = fila->primeiro->proximo;

        // Libera a memoria alocada para o elemento removido
        free(aux);
        i++;
    }
    fila->ultimo = NULL;
    }

    printf("%d\n", i);
}

void insereInicioDeque(Fila *fila, Item item) {
    ElemFila *aux;

    // Cria um novo elemento da lista encadeada que representa a fila e
    // armazena neste novo elemento o item a ser inserido na fila
    aux = malloc(sizeof(ElemFila));
    aux->item = item;
    aux->anterior = NULL;
    aux->proximo= NULL;


    // Insere o novo elemento no fim da lista encadeada que representa a fila
    if (fila->primeiro == NULL) { // Se a fila esta vazia
        fila->primeiro = aux;
        fila->ultimo = aux;
    }
    else { // Se a fila nao esta vazia
        aux->proximo = fila->primeiro;
        fila->primeiro->anterior = aux;
        fila->primeiro = aux;
    }
}



void insereFimDeque(Fila *fila, Item item) {
    ElemFila *aux;

    // Cria um novo elemento da lista encadeada que representa a fila e
    // armazena neste novo elemento o item a ser inserido na fila
    aux = malloc(sizeof(ElemFila));
    aux->item = item;
    aux->proximo = NULL;
    aux->anterior = NULL;

    // Insere o novo elemento no fim da lista encadeada que representa a fila
    if (fila->primeiro == NULL) { // Se a fila esta vazia
        fila->primeiro = aux;
        fila->ultimo = aux;
    }
    else { // Se a fila nao esta vazia
        aux->anterior = fila->ultimo;
        fila->ultimo->proximo = aux;
        fila->ultimo = aux;
    }
}





void removeInicioDeque(Fila *fila) {
    ElemFila *aux;

    if (fila->primeiro == NULL) {
        printf("Erro na operacao removeFila: fila vazia!\n");
        return;
    }

    // Armazena o item a ser removido da fila
    int item = fila->primeiro->item; // ATENCAO: Depende da definicao do tipo do
                                  // item

    // Armazena o primeiro elemento da lista encadeada que representa a fila e
    // remove este primeiro elemento da lista
    aux = fila->primeiro;
    if (fila->primeiro == fila->ultimo) { 
        fila->primeiro = NULL;
        fila->ultimo = NULL;
    }
    else {
        fila->primeiro = fila->primeiro->proximo;
    }
    printf("%d\n", item);
    free(aux);
}


void removeFimDeque(Fila *fila) {
    ElemFila *aux;
    

    if (fila->ultimo == NULL) {
        printf("Erro na operacao removeFila: fila vazia!\n");
        return;
    }

    // Armazena o item a ser removido da fila
    int item = fila->ultimo->item; // ATENCAO: Depende da definicao do tipo do
                                  // item

    // Armazena o ultimo elemento da lista encadeada que representa a fila e
    // remove este ultimoo elemento da lista
    aux = fila->ultimo;
  
    if (fila->ultimo == fila->primeiro) {
        fila->ultimo = NULL;
        fila->primeiro = NULL;
    }
    else{
       fila->ultimo =  fila->ultimo->anterior;
    }
    printf("%d\n", item);   
    free(aux);
}



int main(){

	Fila fila;

	int N, O;
  Item I;

	scanf("%d",&N);


	for (int i = 0; i < N; i++){
		
		scanf("%d",&O);
		switch(O){
			case 1:
				inicializaDeque(&fila);
				break;
			case 2:
			case 3:
				scanf("%d",&I);
				if (O == 2){
					insereInicioDeque(&fila, I);
				}
				else{
					insereFimDeque(&fila, I);
				}
				break;
			case 4:
				removeInicioDeque(&fila);
				break;
			case 5:
				removeFimDeque(&fila);
				break;			
			case 6:	
				libereDeque(&fila);
				break;
		}
	}

}

