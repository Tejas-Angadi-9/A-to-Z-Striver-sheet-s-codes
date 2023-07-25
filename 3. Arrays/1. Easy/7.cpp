// Move all the zeros to the end of the array
#include<bits/stdc++.h>
using namespace std;

void moveAllZeros(int arr[], int n){
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,0,2,3,0,4,0,1};
    int n = sizeof(arr)/sizeof(n);

    moveAllZeros(arr, n);
    print(arr, n);
}

// TC: O(n)
// SC: O(1)