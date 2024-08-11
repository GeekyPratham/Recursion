#include <iostream>
using namespace std;
int sum( int a,int b){
    if(a==b) return b;
    return a+sum(a+1,b);
}
int main(){
    int a;
    cout<<"enter the first no: ";
    cin>>a;
    int b;
    cout<<"enter the last no: ";
    cin>>b;
    cout<<sum(a,b);

}