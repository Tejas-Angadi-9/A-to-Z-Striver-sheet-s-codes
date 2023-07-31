//! 2 sum: Check if a pair with given sum exists in array or not
#include<bits/stdc++.h>
using namespace std;

bool twoSumUsingHash(int arr[] , int n, int target){
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        int num = arr[i];
        int diff = target - num;
        if(mp.find(diff) != mp.end()){
            return true;
        }
        mp[num] = i;    //! we put this value into map after checking into hashmap
    }
    return false;
}

bool twoSumUsingPointers(int arr[], int n, int target){
    sort(arr, arr+n);
    int i = 0;
    int j = n - 1;
    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum == target)
            return true;
        
        else if(sum < target)
            i++;
        else
            j--;
    }
}

int main(){
    int arr[]= {2,6,5,8,11};
    int n = 5;
    int target = 15;
    // cout<<twoSum(arr, n, target);
    cout<<twoSumUsingPointers(arr, n, target);
}

//! TC: O(n)    SC:O(1)