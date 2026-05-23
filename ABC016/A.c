#include <stdio.h>
#include <string.h>
int main(){
  char A[101], B[101];
  scanf("%s %s", A, B);
  if (strlen(A) < strlen(B)) {
    printf("%s\n", B);
  } else {
    printf("%s\n", A);
  }
  return 0;
}

