#include <stdio.h>
int main(){
  int N, S, T;
  scanf("%d %d %d", &N, &S, &T);
  int W;
  scanf("%d", &W);
  int count = 0;
  if (S <= W && W <= T) count++;
  for (int i = 2; i <= N; i++){
    int A;
    scanf("%d", &A);
    W += A;
    if (W >= S && W <= T)count++;
  }
  printf("%d\n", count);
  return 0;
}
