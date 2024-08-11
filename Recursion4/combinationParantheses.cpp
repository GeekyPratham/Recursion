#include <iostream>
#include <string>
using namespace std;
void combParenthesis(string s,int ob,int cb,int n){
    if( ob==n && cb==n){  //base case
        cout<<s<<endl;
        return;
    }
    
    if(ob<n){
        combParenthesis(s+'(',ob+1,cb,n);
    }
    if(cb<ob){
        combParenthesis(s+')',ob,cb+1,n);
    }

    
}
int main(){
    combParenthesis("",0,0,4);
}