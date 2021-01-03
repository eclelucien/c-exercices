#include <stdio.h>
#include <string.h>

int main()
{

  int N, i, j, T, I;
  char alunos[50][40], L;

  scanf("%d\n", &N);

  for (i = 0; i < N; i++){
    fgets(alunos[i], sizeof(alunos[i]), stdin);
    alunos[i][strcspn(alunos[i], "\n")] = '\0';
  }

  scanf("%d", &T);

  for (i = 0; i < T; i++){
     scanf("%d %c", &I, &L);
  }
  
  for (i = 0; i < T; i++){
    if(L == 'u'){
      for (j = 0; j < 40; j++){
        if (alunos[I][j] == ' '){
          printf("%c\n", alunos[I][j+1]);
          break;
        }
      }
    }
    if (L == 'p'){
        printf("%c\n", alunos[I][0]);
    }
  }
    
  

  return 0;
}
