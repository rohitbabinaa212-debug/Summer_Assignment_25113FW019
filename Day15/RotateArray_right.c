#include <stdio.h>

int main() {
    int arr[100],n,i,j,right_rotate,temp;
    printf("Enter the number of elements in the array (<=100): ");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of right rotations: ");
    scanf("%d",&right_rotate);
    right_rotate %= n;

    for(i=0;i<right_rotate;i++)
    {
        temp = arr[n-1];
        for(j=n-1;j>0;j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    printf("The array after right rotation is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}