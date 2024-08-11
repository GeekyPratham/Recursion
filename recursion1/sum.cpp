// #include <iostream>
// using namespace std;
// void sum(int total,int i,int n){
//     //base case
//     if(i>n) {
//         cout<<total;
//         return;
//     }
//     //kaam and calls
//     total=total+i;
//     sum(total,i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     sum(0,1,n);
// }


#include <iostream>
using namespace std;
void sum1toN(int sum,int n){
    if(n==0) {
        cout<<sum;
        return;

    }
    sum1toN(sum+n,n-1);
    

}
int main(){
    
    sum1toN(0,5);
}


