#include <iostream>
#include<string.h>
using namespace std;
string reverse(string str,int i,int j){
    if(i>=j)
        return str;
    else{
        char temp;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    return reverse(str,i+1,j-1);
}
int main() {
    string str;
    cin>>str;
    cout<<"Original String = "<<str<<endl;
    cout<<"Reverse String = "<<reverse(str,0,str.length()-1);

    return 0;
}
