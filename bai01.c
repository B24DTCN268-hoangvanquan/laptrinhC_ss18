
#include <stdio.h>
int main() {
  int num = 22;
  int *ptr = &num;

  printf("Địa chỉ của biến num: %p\n", (void *)&num);

  printf("Giá trị của biến num thông qua con trỏ: %d\n", *ptr);

  return 0;
}