#include <stdio.h>

int main() {
    int i, num,power,result =1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);

    for(i=1; i<=power; i++)
    {
        result = result * num;
    }
    printf("%d raised to the power of %d is: %d", num, power, result);
    return 0;
}
    