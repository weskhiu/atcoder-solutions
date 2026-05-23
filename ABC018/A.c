#include <stdio.h>
int main(){
  int A, B, C;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  int rankA = 1;
  int rankB = 1;
  int rankC = 1;
  if (B > A) rankA++;
  if (C > A) rankA++;
  if (A > B) rankB++;
  if (C > B) rankB++;
  if (A > C) rankC++;
  if (B > C) rankC++;
  printf("%d\n", rankA);
  printf("%d\n", rankB);
  printf("%d\n", rankC);
  return 0;
}

