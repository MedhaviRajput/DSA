#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nPrint unsorted elements\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
   for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
  
    printf("Print Sorted Array :-\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
