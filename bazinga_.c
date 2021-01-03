/*
 * Tarefa de laboratorio 05 - Bazinga
 *
 * GEX605 AB 2020/1
 *
 * Nome: Eclesiaste Lucien
 * Matricula: 1921101044
 *
 */

#include <stdio.h>

int main() {
  /* Dica:
   *
   * Suponha que voce declarou uma variavel do tipo int e duas variaveis do
   * tipo char da seguinte maneira:
   *
   * int n;
   * char a;
   * char b;
   *
   * Para ler uma linha que contem um inteiro seguida de uma linha que
   * contem dois caracteres separados por um espaco em branco, voce pode usar
   * os seguintes comandos:
   *
   * scanf("%d\n", &n);
   * scanf("%c %c\n", &a, &b);
   *
   * */

  int n, i;
  char a;
  char b;
  scanf("%d\n", &n);
  
  for (i=1; i<=n; i++)  {
    scanf("%c %c", &a,&b);

    if (a==b){
      printf("Caso %d: De novo!\n", i);
    }else if ((a=='e' && b=='l') || (a=='e' && b=='t')){
      printf("Caso #%d: Bazinga!\n", i);
    }else if((a=='a' && b=='e') || (a=='a' && b=='s')){
     printf("Caso #%d: Bazinga!\n", i);
    
    }else if((a=='t' && b=='a') || (a=='t' && b=='l')){
     printf("Caso #%d: Bazinga!\n", i);
    }else if((a=='l' && b=='s') || (a=='l' && b=='a')){
     printf("Caso #%d: Bazinga!\n", i);
    }else if((a=='s' && b=='t') || (a=='s' && b=='e')){
     printf("Caso #%d: Bazinga!\n", i);
    }else{
     printf("Caso #%d: Raj trapaceou!\n", i);
   }
  }

    return 0;
}

