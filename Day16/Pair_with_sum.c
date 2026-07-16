#include <stdio.h>

int main() {
    int arr[100],n,i,j,sum=0;
    printf("Enter the number of elements in the array (<=100): ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the sum value: ");
    scanf("%d",&sum);
    printf("Pairs with sum %d are: ", sum);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("(%d, %d) ", arr[i], arr[j]);
            }
        }
    }
    printf("\n");

    return 0;
}