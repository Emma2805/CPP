#include<iostream>
using namespace std;    
int function(int x , int y){
    return x+y;
}
double function(double a , double b){
    return a / b;
}

int main(){
        
    int sum = function(5 , 6);
    int divide = function(20.0 , 10.0);
    cout<<"sum =  "<< sum << " divide = "<<divide;
        return 0;
}