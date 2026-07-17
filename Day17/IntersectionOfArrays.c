#include <stdio.h>

int main(){
     int i,j,k,n1,n2,arr1[100],arr2[100];
    printf("Enter the sizes of both array: ");
    scanf("%d %d",&n1,&n2);

    printf("Enter the first array: ");
    for(i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
    }
    printf("Enter 2nd Array: ");
    for(j=0;j<n2;j++){
        scanf("%d",&arr2[j]);
    }
    printf("The intersected elements are: ");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                printf("%d, ",arr1[i]);
            }
            else continue;
        }
    }
    return 0;
}