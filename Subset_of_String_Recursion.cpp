#include <iostream>
using namespace std;
void subset(string str,string str1,int i){
    if(i==str.length()){
        cout<<"{"<<str1<<"}"<<endl;
        return ;
    }
    str1+=str[i];
    subset(str,str1,i+1);
    str1.pop_back();
    subset(str,str1,i+1);
    
}
int main(){
    string str;
    cin>>str;
    cout<<"Real String ="<<str<<endl;
    cout<<"Subsets of String :"<<endl;
    subset(str,"",0);
}
