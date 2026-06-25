#include <stdio.h>

int main() {
    int i,n,rev=0;
    printf("enter the number: ");
    scanf("%d", &n);

    while(n!=0) {
        rev= rev + n%10;
        n = n/10;
        rev*=10;
    }
    rev = rev /10;
    printf("the reverse of number = %d",rev);
    return 0;
}