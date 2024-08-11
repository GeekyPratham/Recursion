// having duplicate element of string
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
using namespace std;
void printSubset2(string ans,string original,vector<string>& finalAns,bool flag){
    if(original==""){
        finalAns.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.size()==1){
        if(flag==true)printSubset2(ans+ch,original.substr(1),finalAns,true);
        printSubset2(ans,original.substr(1),finalAns,true);
        return; //return islia lagaye hai taki neeche ka code nahi chale
    }
    char dh = original[1];
    if(ch==dh){ // if duplicate present
        if(flag==true)printSubset2(ans+ch,original.substr(1),finalAns,true);
        printSubset2(ans,original.substr(1),finalAns,false);
    }
    else{ //if duplicate not present
        if(flag==true)printSubset2(ans+ch,original.substr(1),finalAns,true);
        printSubset2(ans,original.substr(1),finalAns,true);
    }
    
}
int main(){
    string s="aaabbbcc";
    vector<string> v;
    printSubset2("",s,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


}
