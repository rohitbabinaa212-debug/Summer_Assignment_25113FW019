#include <stdio.h>

int perfect_number(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (perfect_number(n)) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}