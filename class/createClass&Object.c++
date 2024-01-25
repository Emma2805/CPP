#include<iostream>
using namespace std;
//creating class
class myclass{
    public:
    int num;
    string name;
};

int main(){
    //creating object:
    myclass obj;
    // accessing the attribute and set value
    obj.num = 100;
    obj.name = "Sweksha";
    cout<< obj.num<<endl;
    cout<< obj.name<<endl;
    return 0;


}