#include <iostream>
#include <vector>
using namespace std;
void display2(vector<int>& v,int i){
    if(i==v.size()) return;
    cout<<v[i]<<" ";
    display2(v,i+1);
    
  
}
int main(){
   int arr[]={10,6,3,4,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
   vector<int> v(n);
   for(int i=0;i<v.size();i++ ){
    v[i] = arr[i];
   }

    display2(v,0);
}

