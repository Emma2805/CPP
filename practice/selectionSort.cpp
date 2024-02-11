#include<iostream>
using namespace std;

int main(){
    int arr[10] = {10, 12, 9, 2 ,49, 44, 1, 5,3, 11};
    int min = arr[0];
    int min_index;
    for(int i = 0; i<9; i++){
        min_index = i;
        for(int j = i+1;j<10; j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
            if(min_index != j){
                swap(arr[min_index] , arr[j]);
            }
        }
        
} 
for(int i = 0; i<10; i++){
            cout<<arr[i]<<" ";
        }
}