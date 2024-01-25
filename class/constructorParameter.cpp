#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    string color;
    Car(string a , string b){
        brand = a;
        color = b;
    }
};

int main(){
    Car obj1( "xyz", "blue");
    Car obj2("abc" ,"pink" );
    
    cout<<obj1.brand<<" "<<obj1.color<<endl;
    cout<<obj2.brand<<" "<<obj2.color<<endl;

    return 0;
}