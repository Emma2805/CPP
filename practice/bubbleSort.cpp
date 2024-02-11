#include<iostream>
using namespace std;

int main(){
    int arr[10] = {10, 12, 9, 2 ,49, 44, 1, 5,3, 11 };
    for(int i=0;i<10; i++){
        for(int j = i+1; j<10; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int i =0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}