#include <stdio.h>

int main() {
   int arr[100],size,i,j,k,n;

   printf("enter the size of the array(<=100): ");
   scanf("%d",&n);

   printf("Enter the array: ");
   for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }

   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            for(k=j;k<n-1;k++){
                arr[k]=arr[k+1];
            }
            n--;
            j--;
        }
    }
   }

   printf("Array after removing duplicates: ");
   for(i=0;i<n;i++){
    printf("%d ",arr[i]);
   }

   
   return 0;
}