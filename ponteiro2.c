#include <stdio.h>
#include <math.h>

int main(){
  int a, b;

  int *p;
  a = 34;

  p = &a;// & significa pegar o endereço do

  printf("valor de p:%d \n\t Endereço de p %p\n", *p, p);
  printf("valor de a:%d \n\t Endereço de a %p\n", a, &a);


  return 0;
}