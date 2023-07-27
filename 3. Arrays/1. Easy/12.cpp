// Find the number that appears once, and the other numbers twice
#include<iostream>
using namespace std;

int appearOnce(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans ^= arr[i];
    }
    return ans;
}

int main(){
    int arr[] ={4,1,2,1,2};
    int n = 5;
    int ans = appearOnce(arr, n);
    cout<<ans<<endl;
}

// TC: O(n)     SC: O(1)