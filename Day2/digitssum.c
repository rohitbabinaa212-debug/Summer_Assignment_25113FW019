#include <stdio.h>

int main() {
    int i,n,r,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);

    while(n!=0) {
        r = n%10;
        sum = sum + r;
        n/=10;
    }
    printf("sum 0f digits = %d",sum);
    return 0;

}