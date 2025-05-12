#include <iostream>
using namespace std;
int Sum_of_digit(long long n){
    
    if(n==0)
      return 0;
    else if(n<10)
       return n;
    else
       return (n%10)+Sum_of_digit(n/10);
      
}
int main(){
    long long n;
    cin>>n;
    if(n<0)
     n=-n;
     cout<<"Original Number ="<<n<<endl;
    cout<<"Sum of Digits= "<<Sum_of_digit(n)<<endl;
    
}
