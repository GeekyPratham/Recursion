#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
void subset(string ans,string original,int idx,vector<string>& v){
    if(idx==original.length()){
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    subset(ans+ch,original,idx+1,v);
    subset(ans,original,idx+1,v); 
    
}
int main(){
    string s ="abc";
    int n = pow(2,s.length());
    vector<string> v;
    subset("",s,0,v);
    for(string ele:v){
        cout<<ele<<endl;
    }
}