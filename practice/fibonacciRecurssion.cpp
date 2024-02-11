#include<iostream>
using namespace std;

int fibo(int a){
    if((a == 1) || (a == 0)){
        return a;
    }

    int ans = fibo((a-1)+(a-2));
    return ans;
}

int main(){
    int n;
    cin>>n;
    
    cout<<fibo(n);
}