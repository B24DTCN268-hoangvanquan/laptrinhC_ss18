#include <stdio.h>
int sumArray(int *arr, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += *(arr + i);
  }
  return sum;
}

int main() {
  int size;
  printf("Nhap so phan tu: ");
  scanf("%d", &size);

  int arr[size];
  int *arrPtr = arr;

  for (int i = 0; i < size; i++) {
    printf("Nhap arr[%d]: ", i);
    scanf("%d", arrPtr + i);
  }

  printarray(arr, size);
  printf("\nTong cac phan tu = %d\n", sumArray(arr, size));

  return 0;
}
