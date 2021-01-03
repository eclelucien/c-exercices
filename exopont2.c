#include <stdio.h>


 int multiplicacao(int v[10]){
   int i, multi;
   for(i=0; i<=10; i++){
     multi=v[i]*2;
     printf("os valores da nossa função: %d\n", multi);
   }

   return multi;
 }
 
 int main(){
   int v[10], result, i;
   for(i=0; i<10; i++){
     scanf("%d", &v[i]);
   } 
   result=multiplicacao(v[10]);

  printf("Nosso resultado é:%d\n", result);

  return 0; 
 }