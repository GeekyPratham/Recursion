#include <iostream>
using namespace std;
int pow(int a,int b){
    if(b==1) return a;
    int ans = pow(a,b/2);
    if(b%2==0) return ans*ans;
    else return a*ans*ans;
}
int main(){
    cout<<pow(2,6);
}

// #include <iostream>
// using namespace std;
// void pow(int a,int b){
//     if(b==1) {
//         cout<<
//     }
//      pow(a,b/2);
// }
// int main(){
//     pow(2,4);
// }