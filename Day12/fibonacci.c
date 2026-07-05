#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Invalid input
    } else if (n == 1) {
        return 0; // First Fibonacci number is 0
    } else if (n == 2) {
        return 1; // Second Fibonacci number is 1
    }

    int a = 0, b = 1, fib;
    for (int i = 3; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int i,n;
    printf("Enter the last term of the Fibonacci series: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    if (result == 0 && n > 2) {
        printf("Invalid input. Please enter a positive integer greater than 0.\n");
    } else {
        for(i=1; i<=n; i++) {
            printf("%d ", fibonacci(i));
        }
        
    }

    return 0;
}