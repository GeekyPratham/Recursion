// // #include <iostream>
// #include <string>
// using namespace std;
// void display(string s,int i,int n){
//     if(i==n) return;
//     if(s[i]!='a') cout<<s[i];
//     display(s,i+1,n);

// }
// int main(){
//     string str = "Raghav Garg";
//     display(str,0,str.size());
// }

// #include <iostream>
// #include <string>
// using namespace std;
// void display(string ans,string original){
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch=='a') return display(ans,original.substr(1));
//     else display(ans+ch,original.substr(1));
// }
// int main(){
//     string str = "physics wallah";
//     display("",str);
// }


#include <iostream>
#include <string>
using namespace std;
void display(string ans,string original,int i){
    if(original.length()==i){
        cout<<ans;
        return;
    }
    char ch = original[i];
    if(ch=='a') return display(ans,original,i+1);
    else display(ans+ch,original,i+1);
}
int main(){
    string str = "physics wallah";
    display("",str,0);
}
