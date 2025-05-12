#include <iostream>
using namespace std;
void Numbers(int n){
    if(n>0){
    Numbers(n-1);
    cout<<n<<" ";
    }
}
int main() {
     int n;
     cin>>n;
     Numbers(n);
    return 0;
}
