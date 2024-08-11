// #include <iostream>
// #include <climits>
// using namespace std;
// int maximum(int arr[],int n,int i,int max){
//     if(i==n) return max;
//     if(arr[i]>max) max = arr[i];
//     maximum(arr,n,i+1,max);

// }
// int main(){
//     int arr[]={10,2,4,1,5,9,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max = INT_MIN;
//     cout<<"maximum element is : "<<maximum(arr,n,0,max);
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// void maximum(int arr[],int n,int i,int max){
//     if(i==n) {//base case
//         cout<<max;
//         return;
//     }
//     if(arr[i]>max) max = arr[i];
//     maximum(arr,n,i+1,max);

// }
// int main(){
//     int arr[]={10,2,4,1,5,90,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max = INT_MIN;
//     maximum(arr,n,0,max);
// }

#include <iostream>
#include <climits>
using namespace std;
int maximum(int arr[],int n,int i){
    if(i==n) return INT_MIN;
    
    return max(arr[i],maximum(arr,n,i+1));
    
}
int main(){
    int arr[]={10,2,40,1,5,9,8,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"maximum element is : "<<maximum(arr,n,0);
}