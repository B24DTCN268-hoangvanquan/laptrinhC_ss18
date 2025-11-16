
#include <stdio.h>
void sum(int *a, int *b, int *result) { *result = *a + *b; }
int main() {
  int num1 = 3;
  int num2 = 5;
  int result = 0;
  sum(&num1, &num2, &result);
  printf("Tổng của %d và %d là: %d\n", num1, num2, result);
  return 0;
}