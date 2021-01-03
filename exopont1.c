#include <stdio.h>

int main(){
  int a, b, c;
  int *ap;

  scanf("%d %d %d", &a, &b, &c);
  ap = &a;
  printf("%d %d %d %d\n", *ap, a, b, c);
  *ap = c+1;
  printf("%d %d %d %d\n", *ap, a, b, c);
  b = *ap+1;
  printf("%d %d %d %d\n", *ap, a, b, c);
  ap = &c;
  printf("%d %d %d %d\n", *ap, a, b, c);


  

  return 0;
}