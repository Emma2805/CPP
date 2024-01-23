#include<iostream>
using namespace std;
void function(int arr[5]){
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5] = { 10, 20, 30, 40, 50};
    function(arr);
    return 0;

}