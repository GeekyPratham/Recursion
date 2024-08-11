// #include <iostream>
// using namespace std;
// void PrintPath(int sr,int sc,int er,int ec,string s){
//     if(sr>er || sc>ec) return; // destination not reached
//     if(sr==er && sc== ec){ //destination reached
//         cout<<s<<endl;
//         return;
//     }
  
//     PrintPath(sr,sc+1,er,ec,s+'R'); //right
    

//     PrintPath(sr+1,sc,er,ec,s+'D'); //down
    
// }
// int main(){
//     PrintPath(0,0,2,2,"");//3X3 matrix;
// }

#include <iostream>
using namespace std;
void PrintPath(int er,int ec,string s){
    if(er<1 || ec<1) return; // destination not reached
    if(er==1 && ec== 1){ //destination reached
        cout<<s<<endl;
        return;
    }
  
    PrintPath(er,ec-1,s+'R'); //right
    

    PrintPath(er-1,ec,s+'D'); //down
    
}
int main(){
    PrintPath(3,3,"");//3X3 matrix;
}