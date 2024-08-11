#include <iostream>
using namespace std;
int stair(int n){
    if(n==2)
     {
        return 2;
        
    }
    if(n==1)
     {
        return 1;
       
    }
    
    
    int ans= stair(n-1)+stair(n-2);
   return ans;
}
int main(){
    
    cout<<stair(4);
}