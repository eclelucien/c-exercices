#include <stdio.h>
#include <string.h>

int main(){
  char primeira[65], segunda[65];
  int i, j=0;

  fgets(primeira, sizeof(primeira), stdin);
  primeira[strcspn(primeira, "\n")] = '\0';

  for(i= (strlen(primeira)-1); i>=0; i--){
    segunda[j] = primeira[i];
    j++;
  } 
  printf("A string invertida é: %s \n", segunda);


  return 0;
}

/*#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int i, j = 0;
    fgets(str1, sizeof(str1), stdin);
    for(i = (strlen(str1) - 1); i >= 0; i--) {
        str2[i] = str1[j];
        j++;
    }

    printf("String invertida: %s\n", str2);
    return 0;
}*/

/*2-Leia uma string do teclado e imprima ela na ordem inversa. Exemplo: "teste" -> saida "etset";

3 - Leia uma string com 0's e 1's, conte o numero de 1's que tem a string. 
	ex "0011011" - > 4. "010101010110" -> 6*/