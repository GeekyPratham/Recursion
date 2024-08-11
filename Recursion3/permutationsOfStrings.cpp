#include <iostream>
#include <string>
using namespace std;
void permutation(string ans,string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    
    for(int j=0;j<original.length();j++){
        
        char ch = original[j];
        string left=original.substr(0,j);
        string right=original.substr(j+1);
        string original = left+right;
        permutation(ans+ch,original);
    }
    

}
int main(){
    string str = "abcd";
    permutation("",str);

    //some basic operation of string
    // c ke phele aur baad wala string print karna hai
    // string left = str.substr(0,2);
    // cout<<left<<endl;
    // string right = str.substr(2+1);
    // cout<<right<<endl;
    // cout<<left+right<<endl;
}