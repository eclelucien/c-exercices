#include <stdio.h>
#include <string.h>

int main() {
  int N, T, I[100], i, j;
  char L[100], alunos[50][40];

  scanf("%d\n", &N);

  for (i = 0; i < N; i ++) {
    fgets(alunos[i], sizeof(alunos[i]), stdin);
    alunos[i][strcspn(alunos[i], "\n")] = '\0';
  }
  
  scanf("%d\n", &T);

  for (i = 0; i < T; i ++) {
    scanf("%d %c", &I[i], &L[i]);
  }

  for (i = 0; i < T; i ++) {
    if (L[i] == 'p') {
      printf("%c\n", alunos[I[i]][0]);
    }
    if (L[i] == 'u') {
      for (j = 0; j < 40; j ++) {
        if (alunos[I[i]][j] == ' ') {
          printf("%c\n", alunos[I[i]][j+1]);
          break;
        }
      }
    }
  }
  
  return 0;
}