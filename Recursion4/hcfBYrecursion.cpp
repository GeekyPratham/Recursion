#include <iostream>
#include <algorithm>
using namespace std;
int hcf(int a, int b){
    if(a==0) return b;
    return hcf(b%a,a);
    
}
int main(){
    int a=35;
    int b=33;
    cout<<hcf(a,b);
}