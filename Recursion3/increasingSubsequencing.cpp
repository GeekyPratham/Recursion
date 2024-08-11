#include <iostream>
#include <vector>
using namespace std;
void printSubset(int arr[],int n,int idx,vector<int> ans,int k){
    if(idx==n){
       if(ans.size()==k){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
       }

        return;
        
    }
    // if(ans.size()+(n-idx)<k){
    //     return;
    // }

    //upar wala 3 line chalane se time complexity ghate ga

    int num=arr[idx];
    printSubset(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans,k);

}
int main(){
    int arr[]={1,2,3,4,5};
    int k;
    cout<<"required size: ";
    cin>>k;
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;

    printSubset(arr,n,0,v,k);
}