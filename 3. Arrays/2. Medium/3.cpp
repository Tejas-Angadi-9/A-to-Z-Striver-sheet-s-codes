//! Find the Majority Element that occurs more than N/2 times

#include<bits/stdc++.h>
using namespace std;

int findMajority(int arr[], int n){
    int count = 0;
    int val;

    for(int i=0; i<n; i++){
        if(count == 0){
            count = 1;
            val = arr[i];
        }
        else if(val == arr[i]){
            count++;
        }else{
            count--;
        }  
    }

    int cnt1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == val)
            cnt1++;
    }

    if(cnt1 > floor(n/2))
        return val;
    
    return -1;
}

int main(){
    int arr[] = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findMajority(arr, n);
}

//! TC: O(n)    SC: O(1) 