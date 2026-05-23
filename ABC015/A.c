#include <stdio.h>
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int r = a % b;
  if (r == 0){
    printf("0\n");
  }
  else {
    printf("%d\n", b - r);
  }
  return 0;
}
