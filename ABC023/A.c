#include <stdio.h>
int main(){
  int X;
  scanf("%d", &X);
  int ten = X / 10;
  int one = X % 10;
  printf("%d\n", ten + one);
  return 0;
}
