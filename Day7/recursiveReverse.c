#include <stdio.h>

int reverse(int n) {
    static int rev_num = 0;
    if (n == 0) {
        return rev_num;
    }
    rev_num = rev_num * 10 + n % 10;
    return reverse(n / 10);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is: %d", num, reverse(num));
    return 0;
}