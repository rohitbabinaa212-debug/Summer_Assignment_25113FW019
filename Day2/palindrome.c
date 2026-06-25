#include <stdio.h>

int main() {
    int i,n,reversed = 0, original;
    printf("enter the number: ");
    scanf("%d", &n );

    original = n;
    while (n!=0){
        reversed = reversed + n%10;
        n = n/ 10;
        reversed*=10;

    }
    reversed /=10;

    if(original==reversed)
    printf("the number is palindrome");
    else printf("the number is not palindrome");

    return 0;

    
}