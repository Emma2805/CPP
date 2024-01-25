#include<iostream>
using namespace std;
class MyClass{
    public:
    void method1(){
        cout<<"method inside class:";
    }
};

int main(){
    MyClass obj1;
    obj1.method1();

    return 0;
}