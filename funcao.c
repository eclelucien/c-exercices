#include <stdio.h>
#include <math.h>

//void somaValores(int x, int y){
//  return x+y;
//}

//int main(){
// int a, b;
//scanf("%d %d", &a, &b);
//printf("A soma de %d e %d é: %d\n", a, b, somaValores(a, b));
//}

//Lê tres inteiros, a, b, c, sendo a ax²+bx+c
//calcular as raizes da funçao de segundo grau

int funcDelta(int a,int b, int c)
{
  int delta;
  b *= b;
  delta = b - 4*a*c;


  return delta;
}

int main(){
  int a, b, c;
  int x1, x2;

  scanf("%d %d %d", &a, &b, &c);

  if (a != 0){
      //(-b +- raiz(delta))/2*a
      int delta = funcDelta(a,b,c);
      if (delta >= 0){
          x1 = (-b + sqrt(delta)) /2*a;
          x2 = (-b - sqrt(delta)) /2*a;
          printf("X1: %d, x2: %d\n", x1, x2);
      }else
            printf("deu ruim!\n");

  }

  return 0;
}