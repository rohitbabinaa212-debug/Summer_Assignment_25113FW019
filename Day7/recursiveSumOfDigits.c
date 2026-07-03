#include <stdio.h>

int SumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + SumOfDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is: %d", num, SumOfDigits(num));
    return 0;
}
