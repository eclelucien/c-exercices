#include <stdio.h>


int subtracao(int a, int b){
  a = a-b;
  return a;
}

int main() {
  int a, b, resultado;
  scanf("%d %d", &a, &b);

  resultado=subtracao(a, b);
  printf("O Resultado é: %d\n", resultado);

  return 0;
}