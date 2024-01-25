#include<iostream>
using namespace std;

class Myclass{
    public:
        void sum(int x , int y);
};
    void Myclass::sum(int x , int y){
        cout<<"sum is "<<x+y;
        //return x+y;
    }
int main(){
        Myclass obj1;
        int a = 10;
        int b = 20;
        obj1.sum(a , b);
        
        return 0;
}