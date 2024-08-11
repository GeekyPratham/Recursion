#include <iostream>
#include <vector>
#include <string>
using namespace std;
int symbol(int n,int k){
    if(n==1) {
        
        return 0;
    }
    if(k%2==0){
        
        int preAns= symbol(n-1,k/2);
        if(preAns==0) return 1;
        else return 0;
        
        
    }
    else{
        int preAns= symbol(n-1,(k/2)+1);
        return preAns;
        
    }
  

}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<symbol(n,k);

    
}