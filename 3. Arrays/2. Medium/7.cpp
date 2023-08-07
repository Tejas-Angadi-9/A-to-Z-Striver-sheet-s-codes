//! Rearrange array elements by sign
//! Variety 1: where we have equal number of pos and neg values

#include<bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(int arr[], int n){
    vector<int>ans(n,0);

    int posIndex = 0, negIndex = 1;
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
        else{
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
    }
    return ans;
}

int main(){
    int arr[] = {3,1,-2,-5,2,-4};
    int n = 6;

    vector<int> ans = RearrangebySign(arr,n);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

//! TC: O(N)    SC: O(N)