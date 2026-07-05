#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, add;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

 add= sum(num1, num2);
    printf("Sum of %d and %d is %d\n", num1, num2, add);

    return 0;
}