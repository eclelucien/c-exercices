#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void maiorMenor(int vet[5], int *maior, int *menor){
  int i;

  *maior = vet[0];
  *menor = vet[0];

  for (i=1; i<5; i++){
    if (vet[i] > *maior){
      *maior=vet[i];
    }
    if (vet[i] < *menor){
      *menor =vet[i];
    }

  }

}




int main(){
  int vetor[5] = {3, 54, 4, 45662, -5};
  int *maior, *menor;

  maior = malloc(sizeof(int)) ;//aloca um endereço de memória.
  menor= malloc(sizeof(int));

  maiorMenor(vetor, maior, menor);

  printf("maior: %d\n menor: %d\n\n", *maior, *menor);
  //vetor[0]=*(vetor);
  //vetor[1]=*(vetor+1)
  free(maior);//libera um espaço de memória;



  return 0;
}