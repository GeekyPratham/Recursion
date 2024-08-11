// using loop
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    bool flag = true;
    for(int i=0,j=n-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            flag = false;
            break;

        }
        
    }
    if(flag == true) cout<<"it is a palindrom";
    else cout<<"not a palindrom";



}