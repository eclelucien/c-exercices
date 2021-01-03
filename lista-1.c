#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM_NOME 50

typedef struct funcionario{
  int id;
  char nome[TAM_NOME+1];
  double salario;
  struct funcionario *proximo;
} Funcionario;


int main(){
  int i;
  Funcionario *primeiro;

  primeiro = malloc(sizeof(Funcionario));//alocando uma area de memoria para o ponteiro (primeiro)

  primeiro->id = 1;//adicionando o id do primeiro Funcionario

  snprintf(primeiro->nome, TAM_NOME , "%s", "Eclesiaste");//adicionando o nome do primeiro Funcionario

  primeiro->salario = 5000.0;//adicionando o salario do primeiro Funcionario

  primeiro->proximo = NULL;//fazendo o ponteiro proximo apontar para NULL;


  //Vamos adicionar mais elementos
   Funcionario *aux; //auxiliar

  for (i = 1; i <10; i++) {
    aux = malloc(sizeof(Funcionario));//alocando uma memoria para a variavel auxiliar;
    aux-> id = i+1;  //uma variavel qualquer para contar
    snprintf(aux->nome, TAM_NOME, "%s %d", "Nome", i);
    aux->salario = 3000.0*(1.5*i);
    aux->proximo=NULL;
    if (primeiro != NULL){
      aux->proximo = primeiro;
      primeiro = aux;
    }
  }

  for (aux = primeiro; aux != NULL; aux = aux->proximo){
    //aqui aux vale o elemento atual na lista.
    printf("Funcionario id: %d, nome: %s, salario: %lf\n", aux->id, aux->nome, aux->salario);
  }
  return 0;
} 