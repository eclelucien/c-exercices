#include <stdlib.h>
#include <stdio.h>

typedef struct {
  double real;
  double imaginario;
}Complexo;

Complexo criaComplexo(double real, double imag){

  Complexo complexo;

  complexo.real = real;
  complexo.imaginario=imag;

  return complexo;
}




int main(){
  



  return 0;
}