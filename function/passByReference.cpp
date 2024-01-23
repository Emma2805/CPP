#include<iostream>
using namespace std;
void swap(int &x , int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int x , y;
    cin>>x>>y;
    cout<<"value of x is "<<x<<" and value of y is "<<y<<" before swaping."<<endl;
    swap(x, y);
    cout<<"after calling function swaping:";
    cout<<"x = "<<x<<" "<<"y = "<<y;

}