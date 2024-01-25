#include<iostream>
using namespace std;

class car{
    public:
        string brand;
        string color;

};

int main(){
        car obj1;
        obj1.brand = "xyz";
        obj1.color = " blue";
        car obj2;
        obj2.brand = " abc";
        obj2.color = " pink";
        cout<<obj1.brand<<" "<< obj1.color<<endl;
        cout<<obj2.brand<<" "<<obj2.color<<endl;

        return 0;
}