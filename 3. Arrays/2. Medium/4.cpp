//! Kadane’s Algorithm : Maximum Subarray Sum in an Array
#include<bits/stdc++.h>
using namespace std;

int maxSubarray(int arr[], int n){
    int sum = 0;
    int ansStart = -1;
    int ansEnd = -1;
    int start = 0;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        if(sum == 0)    start = i;

        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0) sum = 0;
    }

    //! printing the max Subarray starting from ansStart to ansEnd
    for(int i=ansStart; i<=ansEnd; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return maxi; 
}

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxSubarray(arr, n)<<endl;
}

//! TC: O(n)    SC: O(1) 