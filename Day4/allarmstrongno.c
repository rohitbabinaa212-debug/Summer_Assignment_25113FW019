#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        ++count;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}
//to check armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int n = countDigits(num);
    int result = 0;

    while (num != 0) {
        int remainder = num % 10;
        result += power(remainder, n);
        num /= 10;
    }

    return (result == originalNum);
}

int main() {
    int low , high; 
    printf("Enter two numbers (interval): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);
    for (int i = low + 1; i < high; ++i) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}