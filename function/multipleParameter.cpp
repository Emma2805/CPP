#include<iostream>
using namespace std;
void function(string name , int age ){
    cout<<"the person name is "<<name<<" and the age is "<<age<<endl;
}

int main(){
    function("sweksha", 20);
    function("xyz", 24);
    function("abc", 40);

    return 0;
}