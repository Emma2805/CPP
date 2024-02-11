#include<iostream>
using namespace std;

int rec(int n){
    if(n<=0){
        return 1;
    }
    return rec(n-1) *n;
}

int main(){
    int n;
    cin>>n;
    rec(n);
    cout<<rec(n);
}