#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  int s, t, f, result, soma;

  scanf("%d %d %d", &s, &t, &f);
  soma=s+t+f;
  if(soma == 24){
    result=0;
  }else if(soma>23){
    result=soma-24;
  }else if(soma < 0){
    result=soma+24;
  }else{
    result=soma;
  }
  printf("%d\n", result);


  return 0; 
}