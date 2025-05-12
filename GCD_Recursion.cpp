#include <iostream>
using namespace std;
int GCD(int a,int b){
    if(a==b)
     return b;
    else if(b>a)
     return GCD(b-a,a);
     else
      return GCD(a-b,b);
     
}
int main() {
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"NUMBERS :-"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"GCD of Numbers = "<<GCD(a,b)<<endl;
    return 0;
}
