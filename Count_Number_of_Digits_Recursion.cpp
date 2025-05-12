//This  code is valid Maximum 19 digits number if greater so output is 1.
#include <iostream>
using namespace std;
int countdigit(long long n){
    if(n==0)
        return 1;
    else if(n<10){
        return 1;
    }
    else{
        return 1+countdigit(n/10);
    }
}
int main() {
    long long n;
    cin>>n;
    if(n<0)
        n= -n;
    cout<<"Numbers of digits = "<<countdigit(n);

    return 0;
}
