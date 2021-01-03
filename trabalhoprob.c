#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int n){
  int fato;
  for (fato=1; n>1;n = n-1){
    fato=fato*n;
  }
  return fato;
}




float probabilidadeIndividual(int n, int x, float p){
  int fat, expofal;
  float formula, proba, q;

  expofal=n-x;
  q=1-p;
  fat=(fatorial(n))/(fatorial(expofal)*fatorial(x));


  formula=fat*(pow(p,x))*(pow(q,expofal));
  proba=formula*100;
  return proba;
}




float probabilidadeAcc(int n, int x, int p){
  int i;
  float proba;
  for(i=0; i<=n; i++){
    probabilidade(n, x, p)
  }

  return;
}



int main(){
  int n, x, expofal, fat, opcao;
  float p, q, formula, proba;

  printf("=======Seja bem vindo====\n");
  printf("=====Neste ambiente ajudamos a calcular as probabilidades binomiais====\n");
  printf("==Para o calculo de uma probabilidade Individual, digite 1==\n");
  printf("==Para o calculo de uma probabilidade accumulada, digite 2==\n");
  printf("Opção escolhida:\n");
  scanf("%d", &opcao);
  printf("--Digite o numero de observaçoes (n):\n");
  scanf("%d", &n);
  printf("--Digite o numero de sucessos (x):\n");
  scanf("%d", &x);
  printf("--Digite a probabilidade de sucesso em valor unitaria(p):\n");
  scanf("%f", &p);

  if(opcao == 1){
      printf("A probabilidade é: %.2f %% \n", probabilidadeIndividual(n, x, p));
  }
  /*if(opcao == 2){
      printf("A probabilidade é: %.2f %% \n", probabilidadeAcc(n, x, p));
  }*/

  return 0;
}