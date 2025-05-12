#include <iostream>
using namespace std;
int sum(int n){
    if(n>0){
        return n+sum(n-1);
    }
    return 0;
}
int main() {
    int n,s=0;
    cin>>n;
    cout<<"Sum = "<<sum(n);

    return 0;
}
