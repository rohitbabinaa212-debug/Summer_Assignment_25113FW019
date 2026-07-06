#include <stdio.h>
int main() {
    int arr[100],n,i,j,left_rotate,temp;
    printf("Enter the number of elements in the array (<=100): ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number of left rotations: ");
    scanf("%d",&left_rotate);

    left_rotate %= n;
    for(i=0;i<left_rotate;i++)
    {
        temp = arr[0];
        for(j=0;j<n-1;j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
    printf("The array after left rotation is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}