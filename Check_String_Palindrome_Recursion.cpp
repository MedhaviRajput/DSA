#include <iostream>
using namespace std;
 int planidrom(string str,int i,int j){
    if(i>=j)
        return 1;
     else if(str[i]!=str[j])
       return 0;
    
     return planidrom(str,i+1,j-1);
}
int main() {
    string str;
    cin>>str;
    if(planidrom(str,0,str.length()-1)){
        cout<<"String is Planidrom";
    }
    else{
        cout<<"Not Planidrom";
    }

    return 0;
}
