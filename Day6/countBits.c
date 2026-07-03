#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n) {
        count = count + (n & 1);
        n >>= 1;
    }

    printf("Number of set bits: %d", count);
    return 0;
}