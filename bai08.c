#include <stdio.h>
#include <string.h>

void reverseString(const char *input, char *output) {
  int len = strlen(input);
  for (int i = 0; i < len; i++) {
    output[i] = input[len - 1 - i];
  }
  output[len] = '\0';
}

int main() {
  char inputString[100];
  char reversedString[100];

  printf("Nhap vao mot chuoi: ");
  fgets(inputString, sizeof(inputString), stdin);

  inputString[strcspn(inputString, "\n")] = '\0';

  reverseString(inputString, reversedString);

  printf("Chuoi ban dau: %s\n", inputString);
  printf("Chuoi dao nguoc: %s\n", reversedString);

  return 0;
}
