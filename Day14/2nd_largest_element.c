#include <stdio.h>
int main() {
    int arr[100],n,i,j,second_largest,largest;
    printf("Enter the number of elements in the array (<=100): ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest = arr[0];
    second_largest = -1; 

    for(i=1;i<n;i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
        else 
            continue; 
        
    }
    printf("The second largest element in the array is: %d\n", second_largest);
    return 0;

}