#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
  int dia;
  int mes;
  int ano;
}Data;

typedef struct funcionario{
  int id;
  char nome;
  double salario;
  Data nascimento;
  struct funcionario *proximo;
}Funcionario;

int main(){
  Funcionario *primeiro;
  primeiro=malloc(sizeof(Funcionario));

  primeiro->id=45;
  snprintf(primeiro->nome, sizeof(primeiro->nome), "%s", "Andrei");
  primeiro->nascimento.dia= 
}