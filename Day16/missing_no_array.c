#include <stdio.h>

int main() {
    int arr[100], n, i, j, missing_count = 0;
    printf("Enter the number of elements in the array(<=100): ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Missing numbers in the array are: ");
    for (i = 1; i <= n; i++) {
        int found = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", i);
            missing_count++;
        }
    }

    if (missing_count == 0) {
        printf("None");
    }
    printf("\n");
    return 0;
}