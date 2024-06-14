#include <stdio.h>

void reverse(int num);

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  reverse(num);
  return 0;
}

void reverse(int num) {
  int reverse = 0;
  while (num != 0) {
    reverse = reverse * 10 + num % 10;
    num /= 10;
  }
  printf("The reverse of the number is: %d\n", reverse);
}