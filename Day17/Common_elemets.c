#include <stdio.h>

int main(){
     int i,j,k,n,arr[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the first array: ");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

    printf("the common elements are : ");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                 printf("%d ",arr[i]);
                 break;
        }
    }
}
    return 0;
}
    
