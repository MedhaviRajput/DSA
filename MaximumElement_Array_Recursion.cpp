#include <iostream>

using namespace std;
int max1(int *arr,int i,int j,int max){
    if(i>j)
        return max;
    else{
        if(arr[i]>arr[j]){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        else{
            if(max<arr[j]){
                max=arr[j];
            }
        }
    }
    return max1(arr,i+1,j-1,max);
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    cout<<"Maximum Value = "<<max1(arr,0,n-1,max);

    return 0;
}
