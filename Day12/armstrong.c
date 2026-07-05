#include <stdio.h>
int armstrong(int num) {
    int original = num, sum = 0, digits = 0;

    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = num; 

    while (original != 0) {
        int digit = original % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        original /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}