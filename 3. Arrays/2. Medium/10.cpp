//! Longest Consecutive Sequence in an Array
#include<bits/stdc++.h>
using namespace std;

int longestConsSeq(int arr[], int n){

    int longest = 1;

    unordered_set<int> st;

    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }

    for(auto it: st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x + 1) != st.end()){
                x += 1;
                cnt += 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main(){
    int arr[] = {102, 4,100,1,101,3,2,1,1};
    int n = 9;
    int ans = longestConsSeq(arr, n);
    cout<<ans<<endl;
}