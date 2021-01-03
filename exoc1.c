#include <stdio.h>
#include <string.h>

/* Exercicio para imprimir o numero de carateres que tem uma string */

int main()
{
  char vetor[20];
  int i;

  fgets(vetor, sizeof(vetor), stdin);
  vetor[strcspn(vetor, "\n")] = '\0';

  /*int num_chars = 0;*/

  for (i = 0; i < 20; i++)
  {
    if (vetor[i] == '\0')
    {
      break;
    }
   /* num_chars++;*/
  }
  printf("Numero de carateres: %d\n", i);

  return 0;
}