#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int dia;
  int mes;
  int ano;
}Data;


int extraiDia(Data data){
  return data.dia;
}

int comparaDatas(Data data1, Data data2){
  if (data1.ano > data2.ano){
    return 1;
  }else if(data1.ano < data2.ano){
    return -1;
  }else {
    if (data1.ano == data2.ano && data1.mes > data2.mes){
      return 1;
    }
    if (data1.ano == data2.ano && data1.mes < data2.mes){
      return -1;
    }else{
      if (data1.ano == data2.ano && data1.mes > data2.mes && data1.dia > data2.dia){
        return 1;
      }
      if (data1.ano == data2.ano && data1.mes > data2.mes && data1.dia < data2.dia){
        return -1;
      }else{
        return 0;
      }
    }
  }
}


int main(){
  Data  data1, data2;

  scanf("%d", &data1.dia);
  scanf("%d", &data1.mes);
  scanf("%d", &data1.ano);

  scanf("%d", &data2.dia);
  scanf("%d", &data2.mes);
  scanf("%d", &data2.ano);

  printf("O nosso dia é:%d\n", extraiDia(data1));

  printf("A comparação saiu asssim: %d\n", comparaDatas(data1, data2));
  

  return 0;
}

 