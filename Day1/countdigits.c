#include <stdio.h>

int main() {
    int i, n, count = 0;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n !=0) {
        n = n/ 10;
        count++;
    }
    printf("the number of digits is %d", count);
    return 0;
}