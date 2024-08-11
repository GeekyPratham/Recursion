// #include <iostream>
// using namespace std;
// int maze(int sr,int sc,int er,int ec){
//     if(sr>er || sc>ec) return 0;
//     if(sr==er && sc== ec) return 1;
  
//     int rightWays=maze(sr,sc+1,er,ec);
//     int downWays=maze(sr+1,sc,er,ec);
//     int totalWays = rightWays + downWays;
//     return totalWays;
// }
// int main(){
//     cout<<maze(0,0,4,4);//3X3 matrix;
// }


// by using two parameter

#include <iostream>
using namespace std;
int maze(int er,int ec){
    if(er<1 || ec<1) return 0;
    if(er==1 && ec== 1) return 1;
  
    int rightWays=maze(er,ec-1);
    int downWays=maze(er-1,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
    cout<<maze(4,4);//3X3 matrix;
}