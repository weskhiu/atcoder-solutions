#include <stdio.h>
int main(){
  int N;
  scanf("%d", &N);
  double ans = (N + 1) * 10000.0 / 2;
  printf("%.10f\n", ans);
  return 0;
}
