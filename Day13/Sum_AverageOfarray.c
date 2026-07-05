#include <stdio.h>

int main() {
    int arr[100], n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements in the array<100: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("Sum of the array elements: %.2f\n", sum);
    printf("Average of the array elements: %.2f\n", average);

    return 0;
}