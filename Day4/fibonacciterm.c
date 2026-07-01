#include <stdio.h>
int main()
 {
    int i, previoussecond = 0, previousfirst = 1, current ,n;

    printf("Enter the number of term: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i=1; i<=n-2; ++i)
    {
        current = previoussecond + previousfirst;
        previoussecond = previousfirst;
        previousfirst = current;
    }
    printf("%d",current);

    return 0;



}