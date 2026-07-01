#include <stdio.h>
#include <stdlib.h>

int main() {
    int decimalNumber, binaryNumber = 0, remainder, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * base;
        decimalNumber /= 2;
        base *= 10;
    }

    printf("Binary equivalent: %d\n", binaryNumber);
    return 0;
}