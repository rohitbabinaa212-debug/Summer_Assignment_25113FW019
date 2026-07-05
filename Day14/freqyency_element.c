#include <stdio.h>
int main() {
    int arr[100],n,i,frequency[100],j,count;
    printf("Enter the number of elements in the array<=100: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        frequency[i] = -1;
    }

    for(i=0;i<n;i++)
    {
        count = 1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                frequency[j] = 0; 
            }
        }
        if(frequency[i] != 0)
        {
            frequency[i] = count;
        }
    }

    printf("Element\tFrequency\n");
    for(i=0;i<n;i++)
    {
        if(frequency[i] != 0)
        {
            printf("%d\t%d\n", arr[i], frequency[i]);
        }
    }

    return 0;
}