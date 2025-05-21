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
     int key=0;
   for(int i=0;i<n;i++){
       key=i;
       for(int j=i+1;j<n;j++){
           if(arr[key]>arr[j]){
           key=j;
       }
   }
   int temp;
   temp=arr[i];
   arr[i]=arr[key];
   arr[key]=temp;
   }
      printf("Print Sorted Array :-\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
