#include <stdio.h>
#include <math.h>

 #define TAM_NOME 40

struct data{
  int dia;
  int mes;
  int ano;
};

struct funcionario{
  int id;
  char nome[TAM_NOME+1];
  double salario;
  struct data nascimento;
};



int main(){

  /*struct{
    int dia;
    int mes;
    int ano;
    char nome[TAM_NOME+1];
  }data1 = { 4, 12, 1957, "Jean Edouard" },
  data2 = { 6, 8, 1975, "Jean Fritz" };

  printf("O dia é: %d\n", data2.dia);
  printf("O mês é: %d\n", data2.mes);
  printf("O ano é: %d\n", data2.ano);
  printf("O nome é: %s\n", data2.nome);*/
  struct funcionario funcionario1 ={45, "Machado", 45214.00};
  
  printf("O Id do nosso funcionario é: %d\n", funcionario1.id);
  printf("A primeira lettra do nome do nosso funcionario é: %s\n", funcionario1.nome);
  printf("O dia de nascimento do nosso funcionario é: %d\n", funcionario1.nascimento.dia);


  return 0;
}