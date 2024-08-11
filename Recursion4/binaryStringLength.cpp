#include <iostream>
#include <vector>
using namespace std;
void binaryString(string ans,int n){
    if(ans.length()==n){
        cout<<ans<<endl;
        return;
    }
    binaryString(ans+'0',n);
    if(ans=="" || ans[ans.length()-1]=='0'){
        
        binaryString(ans+'1',n);
    }

    
}
int main(){
    // int n;
    // cin>>n;
    binaryString("",4);
}