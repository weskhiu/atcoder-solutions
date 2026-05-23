#include <stdio.h>
int main(){
  int N;
  scanf("%d", &N);
  int a[10];
  int k = 0;
  int pows[4] = {8, 4, 2, 1};
  for (int i = 0; i < 4; i++) {
      while (N >= pows[i]) {
        a[k++] = pows[i];
        N -= pows[i];
      }
  }
  printf("%d\n", k);
  for (int i = 0; i < k; i++) {
     printf("%d\n", a[i]);
  }
  return 0;
}
