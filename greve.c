/*
 * Tarefa de laboratorio 06 - Greve
 *
 * GEX605 AB 2020/1
 *
 * Nome:      Eclesiaste Lucien
 * Matricula: 1921101044
 *
 */

#include <stdio.h>

int main() {
  /* Dica:
   *
   * Suponha que voce declarou uma variavel do tipo int, uma variavel do tipo
   * char e outra variavel do tipo int da seguinte maneira:
   *
   * int n;
   * char a;
   * int x;
   *
   * Para ler uma linha que contem um inteiro seguida de uma linha que contem
   * um caractere e um inteiro separados por um espaco em branco, voce pode
   * usar os seguintes comandos:
   *
   * scanf("%d\n", &n);
   * scanf("%c %d\n", &a, &x);
   *
   */
  int n, c, i=1;
  int somaG=0;
  int somaV=0;
  char a;
  scanf("%d\n", &n);
  
  while(i < n){
    i++;
    scanf("%c %d\n", &a, &c);
    if (a=='G'){
      somaG+=c;
    }else{
      somaV+=c;
    }
  }
  if (somaV > somaG){
    printf("A greve vai parar.\n");
  }else{
    printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
  }
  
  

  return 0;
}

