#include <stdio.h>

int main() {
    int i, n;
    long long factorial = 1;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        factorial *= i;
    }
    printf("the factorial of %d is %lld", n, factorial);
    return 0;
}