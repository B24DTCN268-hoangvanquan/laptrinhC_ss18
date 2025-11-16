#include <stdio.h>
void sortArray(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (*(arr + j) > *(arr + j + 1)) {
        int temp = *(arr + j);
        *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = temp;
      }
    }
  }
}
void printArray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", *(arr + i));
  }
  printf("\n");
}
int main() {

  int size;
  printf("Nhap so phan tu cua mang: ");
  scanf("%d", &size);
  int arr[size];
  for (int i = 0; i < size; i++) {
    printf("Nhap arr[%d]: ", i);
    scanf("%d", arr + i);
  }

  printf("Mang ban dau: ");
  printArray(arr, size);
  sortArray(arr, size);
  printf("Mang sau khi sap xep: ");
  printArray(arr, size);
  return 0;
}