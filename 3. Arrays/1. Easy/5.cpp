// Left rotate the array by one
#include<iostream>
using namespace std;

void rotateArray(int arr[], int n){
    int temp = arr[0];

    for(int i=0; i<n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {3,2};
    int n = 2;

    rotateArray(arr, n);
    print(arr, n);
}

// TC: O(n)     SC: O(1)