#include <stdio.h>

int main() {
    int i, n,product = 1;
    printf("enter the number: ");
    scanf("%d",&n);

    while(n!=0){
        product = n%10*product;
        n=n/10;

    }
    printf("product of digits of the number = %d", product);
    return 0;
}