#include <stdio.h>

int main(){
    int i, n,r, fact=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0){
        r=n%10;
        for(i=1;i<=r;i++){
            fact*=i;
        }
        sum+=fact;
        n/=10;
    }
    if(sum==n) printf("the number is a strong number");
    else printf("the number is not a strong number",n);
    return 0;
}