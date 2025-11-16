#include <stdio.h>
#include <string.h>
void updateElement(int arr[], int pos, int newValue) { arr[pos] = newValue; }

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5, position = 2, value = 100;

  printf("Mang ban dau: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  updateElement(arr, position, value);
  printf("\nMang sau khi cap nhat: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
