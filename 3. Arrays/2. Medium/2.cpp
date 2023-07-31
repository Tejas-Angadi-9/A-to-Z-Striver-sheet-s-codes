//! Sort an array of 0s, 1s and 2s
#include<bits/stdc++.h>
using namespace std;

void sortArr(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low++], arr[mid++]);
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {2,0,2,1,1,0};
    int n = 6;
    sortArr(arr, n);
    print(arr, n);
}

//! TC: O(n)    SC: O(1)