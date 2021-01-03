#include <stdio.h>
#include <string.h>

int main() {
  int N, T, I[100], cont, cont2;
  char L[100], alunos[50][40];

  scanf("%d\n", &N);

  for (cont = 0; cont < N; cont ++) {
    fgets(alunos[cont], sizeof(alunos[cont]), stdin);
    alunos[cont][strcspn(alunos[cont], "\n")] = '\0';
  }
  
  scanf("%d\n", &T);

  for (cont = 0; cont < T; cont ++) {
    scanf("%d %c\n", &I[cont], &L[cont]);
  }

  for (cont = 0; cont < T; cont ++) {
    if (L[cont] == 'p') {
      printf("%c\n", alunos[I[cont]][0]);
    }
    if (L[cont] == 'u') {
      for (cont2 = 0; cont2 < 40; cont2 ++) {
        if (alunos[I[cont]][cont2] == ' ') {
          printf("%c\n", alunos[I[cont]][cont2+1]);
          break;
        }
      }
    }
  }
  
  return 0;
}