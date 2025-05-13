#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int pivot(int arr[],int st,int en){
    int pivot=arr[en];
    int indx=st-1;
    for(int k=st;k<en;k++){
        if(arr[k]<=pivot){
            indx=indx+1;
            swap(&arr[indx],&arr[k]);
            }
    }
        swap(&arr[indx+1],&arr[en]);
        return indx+1;
    
}
void Quicksort(int arr[],int st,int en){
    if(st<en){
    int pivotindx=pivot(arr,st,en);
    Quicksort(arr,st,pivotindx-1);
    Quicksort(arr,pivotindx+1,en);
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    Quicksort(arr,0,n-1);
    cout<<endl<<"Sorted array"<<endl;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }

    return 0;
}
