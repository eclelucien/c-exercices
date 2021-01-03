#include <stdio.h>

/*
int main(){
  int vetor[10];
  float vet[5000];

  return 0;
}

int main(){
  int vetor[4];

  vetor[0]=1;
  vetor[1]=1;
  vetor[2]=1;
  vetor[3]=1;

  return 0;
}


int main(){
  int vetor[]={1,2,3,4};

  int vetor[4]={1,2,3,4};
  
  return 0;
}
*/
/*
int main(){
  int vetor[11]={1,2,3,4,5,7,6,4,2,3,5}, i;

  for (i=0; i<11; i++){
  printf("%d\n", vetor[i]);
  }

  return 0;
}
*/
/*
int main(){
  int i, vet[5], menor, maior;
  
  for(i=0; i<5; i++){
    printf("\nDigite  a posição [%d] numero inteiro:\n", i);
    scanf("%d", &vet[i]);
  }
  menor=vet[i];
  maior=vet[i];
  for (i=0; i<5; i++){
    printf("Numero %d\n", vet[i]);
    if(vet[i]>maior){
      maior=vet[i];
    }else if(vet[i]<menor){
      menor=vet[i];
    }
  }
  printf("Maior Numero digitado:%d\n", maior);
  printf("Menor numero digitado:%d\n", menor);


  return 0;
}*/

int main(){
  int i, vet[6];

  for(i=0; i<6; i++){
    scanf("%d", &vet[i]);
  }
  for(i=0; i<6; i++){
    if(vet[i]%2 == 0){
    printf("Numero pare: %d na posição %d\n", vet[i], i);
  }

  }
  return 0;
}