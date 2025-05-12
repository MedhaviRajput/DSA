#include <iostream>
using namespace std;
void Numbers(int n){
    if(n>0){
    cout<<n<<" ";
    Numbers(n-1);
    }
}
int main() {
     int n;
     cin>>n;
     Numbers(n);

    return 0;
}
