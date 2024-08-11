// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// using namespace std;
// void combinationSum(int arr[],int target,vector<int> ans,int n,int i){
//     if(accumulate(ans.begin(),ans.end(),0)==target){
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
    
//     if(accumulate(ans.begin(),ans.end(),0)<target){
//         for(int j=i;j<n;j++){
//         ans.push_back(arr[j]);
//         combinationSum(arr,target,ans,n,j);
//         ans.pop_back();
//         }
//     }
   
// }
// int main(){
//     int arr[]={2,3,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 8;
//     vector<int> v;
//     combinationSum(arr,target,v,n,0);
// }

#include <iostream>
#include <vector>
using namespace std;
void combination(int arr[],vector<int> v,int n,int target,int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0)return;

    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combination(arr,v,n,target-arr[i],i);
        v.pop_back();
    }
    
    
}
int main(){
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    vector<int> v;
    combination(arr,v,n,8,0);
}