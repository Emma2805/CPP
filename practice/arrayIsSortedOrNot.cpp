#include<iostream>
using namespace std;
bool isSorted(int arr[], int n ){
    for(int i = 1; i<n; i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
        
    }
    return true;

}

int main(){
    int arr[10];
    for(int i =0; i<10; i++){
        cin>>arr[i];
    }
    cout<<isSorted(arr, 10);
}