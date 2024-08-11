/*
input n = 4
output = 1,2,3,4,3,2,1
*/
#include <iostream>
using namespace std;
void print(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    print(i+1,n);
    if(i>1){
        cout<<i-1<<" ";
        return;
    }
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}