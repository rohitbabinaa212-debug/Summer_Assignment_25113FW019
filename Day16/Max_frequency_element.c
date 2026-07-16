#include <stdio.h>

int main() {
    int arr[100],n,i,j,max_freq=0,max_element=0;
    printf("Enter the number of elements in the array (<=100): ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        int freq=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
            }
        }
        if(freq>max_freq)
        {
            max_freq=freq;
            max_element=arr[i];
        }
    }
    printf("Element with maximum frequency: %d\n", max_element);
    printf("Maximum frequency: %d\n", max_freq);
    return 0;
}