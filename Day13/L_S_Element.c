#include <stdio.h>

int main(){
     int arr[100], n, i, large,small;

    printf("Enter the number of elements in the array<100: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    large = arr[0];
    small = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
        if (arr[i] < small) {
            small = arr[i];
        }
    }

    printf("Largest element in the array is: %d\n", large);
    printf("Smallest element in the array is: %d\n", small);

    return 0;
}