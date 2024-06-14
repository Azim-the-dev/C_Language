#include <stdio.h>

int main() {
    int num, sum = 0, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);
    return 0;
}
