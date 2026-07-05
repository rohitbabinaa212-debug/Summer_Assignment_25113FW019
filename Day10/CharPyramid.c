#include <stdio.h>

int main() {
    int i, j, n,k;

    printf("Enter the number of Rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
       int a =65;
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1;j<= i; j++) {
            printf("%c", a);
            ++a;
        }
        a=a-2;
        for(k=i-1;k>=1;k--){
            printf("%c", a);
            a--;
        
        }
        printf("\n");
    }
    return 0;
}