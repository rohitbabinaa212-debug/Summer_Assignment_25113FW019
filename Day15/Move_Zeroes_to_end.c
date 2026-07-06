#include <stdio.h>

int main() {
    int arr[100],n,i,j,zero_count=0;
    printf("Enter the number of elements in the array (<=100): ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            arr[zero_count++] = arr[i];
        }
    }
    for(i=zero_count;i<n;i++)
    {
        arr[i] = 0;
    }
    printf("The array after moving zeros to the end is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}