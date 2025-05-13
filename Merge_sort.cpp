#include <iostream>
using namespace std;
void merge(int arr[],int st,int en,int mid){
   int temp[en+1], i=st,j=mid+1,k=0;
    while(i<=mid && j<=en){
        if(arr[j]<arr[i]){
            temp[k]=arr[j];
            j++;
            k++;
        }
        else{
            temp[k]=arr[i];
            i++;
            k++;
        }
    }
    while(j<=en){
         temp[k]=arr[j];
            j++;
            k++;
    }
    while(i<=mid){
        temp[k]=arr[i];
            i++;
            k++;
    }
    for(int p=0;p<k;p++){
        arr[st+p]=temp[p];
    }
}
void mergesort(int arr[],int st,int en){
    int mid;
    if(st<en){
        mid=st+(en-st)/2;
        mergesort(arr,st,mid);
        mergesort(arr,mid+1,en);
        merge(arr,st,en,mid);
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
    mergesort(arr,0,n-1);
    cout<<endl<<"Sorted array"<<endl;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }

    return 0;
}
