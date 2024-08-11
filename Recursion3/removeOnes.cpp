//by using for loop

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,1,5,4,1,1,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int a[100];
   
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=1) {
//             a[j]=arr[i];
//             j++;
//         }
//     }
//     for(int i=0;i<j;i++){
//         cout<<a[i];
//     }

// }

//by using recursion

#include <iostream>
using namespace std;
void removeOne(int arr[],int a[],int n,int i,int j){
    if(i==n) return;
    if(arr[i]!=1) {
        a[j] =arr[i];
        cout<<a[j];
        
        removeOne(arr,a,n,i+1,j+1);
    }
    else removeOne(arr,a,n,i+1,j);




}
int main(){
    int arr[]={1,2,3,1,5,4,1,1,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a[100];
    removeOne(arr,a,n,0,0);

}