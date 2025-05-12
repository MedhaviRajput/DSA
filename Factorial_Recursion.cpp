#include <iostream>
using namespace std;
int Factorial(int n){
    if(n==0 && n==1){
        return 1;
    }
    return n*Factorial(n-1);
}
int main() {
    int n,s=0;
    cin>>n;
    cout<<"Factorial = "<<Factorial(n);

    return 0;
}
