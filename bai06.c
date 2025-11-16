
#include <stdio.h>
int findElement(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}
int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target;

  printf("Nhap gia tri can tim: ");
  scanf("%d", &target);

  int result = findElement(arr, size, target);
  if (result != -1) {
    printf("Phan tu %d duoc tim thay o vi tri: %d\n", target, result);
  } else {
    printf("Khong tim thay phan tu %d trong mang.\n", target);
  }

  return 0;
}