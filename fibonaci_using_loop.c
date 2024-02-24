#include <stdio.h>
int main() {

  int count, number;
  int term1 = 0, term2 = 1;
  int nextTerm = term1 + term2;
  printf("Enter the number of terms: ");
  scanf("%d", &number);
  printf("Fibonacci Series: %d, %d, ", term1, term2);
  for (count = 3; count <= number; ++count) {
    printf("%d, ", nextTerm);
    term1 = term2;
    term2 = nextTerm;
    nextTerm = term1 + term2;
  }

  return 0;
}
