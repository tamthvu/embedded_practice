// Reverse the words in a sentence
// reverse whole array then reverse the words

#include <stdio.h>

void printArray(char arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%c", arr[i]);
  }
}

void reverseStr(char str[], int left, int right) {
  while (left < right) {
    int temp = str[left];
    str[left] = str[right];
    str[right] = temp;
    left++;
    right--;
  }
}

void reverseWords(char str[], int size) {
  int charCountWord = 0;
  for (int i = 0; i < size; i++) {
    if ((str[i] == ' ') || (str[i]) == '\0') {
      reverseStr(str, charCountWord, i - 1);
      charCountWord = i + 1;
    }
  }
}

int main() {
  char str[] = "Hi this is a sentence in line";
  // char str[] = "Hi this";
  const int size = sizeof(str);
  printf("Size of orignal str with null termination: %d\n", size);

  reverseStr(str, 0, size - 2);
  reverseWords(str, size);
  printArray(str, size);
}