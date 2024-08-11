#include <iostream>
#include <vector>

using namespace std;
// void display(int arr[],int n,int i){
//     if(i==n) return;
//     cout<<(arr[i])<<" ";
//     display(arr,n,i+1);
    
  
// }

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
//    display(arr,n,0);
    display2(v,0);
}






// #include <iostream>
// using namespace std;
// void display(int arr[],int n){
//     if(n-1<0) return;
//     display(arr,n-1);
//     cout<<(arr[n-1])<<" ";
    
  
// }
// int main(){
//    int arr[]={2,1,3,5,7,9};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    display(arr,n);
// }