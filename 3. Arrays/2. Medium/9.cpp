//! Leaders in an array

#include<bits/stdc++.h>
using namespace std;

vector<int> findLeaders(int arr[], int n){
    vector<int> ans;
    int maxVal = INT_MIN;
    for(int i=n-1; i>=0; i--){
        if(arr[i] > maxVal){
            maxVal = arr[i];
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int arr[] = {4,7,1,0};
    int n = 4;
    vector<int>ans = findLeaders(arr, n);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

//! TC: O(n)    SC: O(n)