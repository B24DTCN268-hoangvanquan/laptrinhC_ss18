
#include <stdio.h>
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
int main() {
  int a = 12;
  int b = 22;

  printf("Trước khi hoán đổi: a = %d, b = %d\n", a, b);

  swap(&a, &b);

  printf("Sau khi hoán đổi: a = %d, b = %d\n", a, b);

  return 0;
}