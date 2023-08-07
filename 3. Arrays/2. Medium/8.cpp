//! Next Permutation: Find the next permutation of the given number in the array

#include<bits/stdc++.h>
using namespace std;

void findNextPermutation(int arr[], int n){
    int index = -1;
    for(int i=n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }

    if(index == -1){
        reverse(arr, arr+n);
        return;
    }

    for(int i=n-1; i>=0; i--){
        if(arr[i] > arr[index]){
            swap(arr[i], arr[index]);
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,3,1};
    int n = 3;
    findNextPermutation(arr, n);
}