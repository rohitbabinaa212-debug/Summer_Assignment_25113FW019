#include <stdio.h>
int main()
 {
    int i, previoussecond = 0, previousfirst = 1, current ,n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i=1; i<=n; ++i)
    {
        printf("%d ", previoussecond);
        current = previoussecond + previousfirst;
        previoussecond = previousfirst;
        previousfirst = current;
    }

    return 0;



}