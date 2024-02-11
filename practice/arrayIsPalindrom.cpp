#include<iostream>
using namespace std;

bool palindrome(int arr[], int n){
    int s =0;
    int e = n-1;
    while(s<=e){
        if(arr[s] != arr[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

// void reverse(int arr[], int n){
//     for(int i = n-1; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }
// }

int main(){
    int arr[5];
    for(int i =0; i<5; i++){
        cin>>arr[i];
    }
    //reverse(arr, 5);
    cout<<palindrome(arr, 5);
}