#include <stdio.h>
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max = maximum(num1, num2);
    printf("Maximum of %d and %d is %d", num1, num2, max);

    return 0;
}