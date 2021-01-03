#include <stdio.h>

int main(){
  float mat[3][5];
  int i, j, ind_aluno_primp;;
  int ind_aluno_segunp;
  int ind_aluno_tercp;


  for(i = 0; i<3; i++) { /*i = 0 até 2*/
      for(j = 0; j < 5; j++) { /*i = 0 até 4*/
          scanf("%f", &mat[i][j]);
      }

  }
  /*scanf("%d", &ind_aluno_primp);
  scanf("%d", &ind_aluno_segunp);
  scanf("%d", &ind_aluno_tercp);
  scanf("%d %d %d", &ind_aluno_primp, &ind_aluno_segunp, &ind_aluno_tercp);*/

  printf("Nota do aluno 4 na primeira prova: %f\n", mat[0][4]);
  printf("Nota do aluno 4 na segunda prova: %f\n", mat[1][4]);
  printf("Nota do aluno 4 na terceira prova: %f\n", mat[2][4]);

  return 0;
}