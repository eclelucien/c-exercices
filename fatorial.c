#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){
  int fato, n;
  scanf("%d", &n);



  for (fato=1; n>1; n = n-1){
    fato=fato*n;
  }
  printf("O fatorial de %d é: %d\n", n, fato);
  return 0;
}