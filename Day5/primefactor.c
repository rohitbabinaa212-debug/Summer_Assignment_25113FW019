#include <stdio.h>

int main() {
    int i,n;
    printf("enter the number: ");
    scanf("%d",&n);

    printf("the largest prime factor of %d are: ",n);

    for(i=2;i<=n;i++){
        if(n%i==0){
            n=n/i;
            i--;
            
        }
        else continue;
    }
    printf("%d",i);
    return 0;

}