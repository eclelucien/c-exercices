#include <stdio.h>
#include <math.h>

void somaAB(int a, int b){
  a+b;
  printf("valor de A interno: %d\n", a);
}

void somaABReferencia(int *a, int b){
    *a = *a + b; //acessando o valor do ponteiro,
    // o valor contido no endereço da memoria 
 
}
//Lê tres inteiros, a,b,c, sendo a ax²+bx+c
//Calcular as raizes da função de segundo grau.

int main(){
  int a,b;
  int *ponteiro;
  float x;
  float *ponteiroX;

  ponteiro =&a; //manimpulando o endereço
  int vet[4]={1,2,3,4};
  //para manipular o valor 

  scanf("%d %d", &a,&b);
  somaAB(a,b);

  //soamABReferencia(&a,&b);

  printf("a = %d \n", *ponteiro);
  printf("a = %p \n", ponteiro);
  printf("a = %p \n", &a);

  printf(" sizeof (int) : %ld\n", sizeof(int));
  printf(" sizeof (double) : %ld\n", sizeof(double));
  printf(" sizeof (float) : %ld\n", sizeof(float));


  int *p;
  p = &a;// o ponteiro p, aponta o endereçco da variavel a.

  //um vetor é um ponteiro tambem
  //vet[0] = *(vet)
  printf("%d\n", vet[3]);
  printf("%d\n", *(vet+3));


  return 0;
}

