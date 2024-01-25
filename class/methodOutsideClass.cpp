#include<iostream>
using namespace std;

class MyClass{
    public:
    void method1();
};
void MyClass::method1(){
    cout<<"method outside the class:";
}
int main(){
        MyClass obj1;
        obj1.method1();

        return 0;
}