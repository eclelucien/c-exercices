#include <stdio.h>
#include <math.h>

typedef struct{
  int dia;
  int mes;
  int ano;
}Data;

int extraidata(Data data){
  return data.dia;
}

int main(){
  Data d;  

  printf("Digite o dia:\n");
  scanf("%d", &d.dia);

  printf("O dia que voce digitou é: %d\n", extraidata(d));

  return 0;
}
