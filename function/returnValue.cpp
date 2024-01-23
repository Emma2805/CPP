#include<iostream>
using namespace std;
// int function(int x){
//     return 10 + x;
// }
int function(int x , int y){
    return x+y;
}

int main(){
    int z = function(4,5);
    cout<<z;
    return 0;
}