#include <stdio.h>
int main() {
    int n1,n2, a, b, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    a = n1;
    b = n2;
    while(a != b) {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    lcm = (n1 * n2) / a;
    printf("LCM of %d and %d is %d", n1, n2, lcm);
    return 0;
}