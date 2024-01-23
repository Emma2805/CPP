#include<iostream>
using namespace std;
void function(string country = "Norway"){
    cout<<country<<endl;
}

int main(){
    function("India");
    function("pakistan");
    function();
    function("korea");
    return 0;

}