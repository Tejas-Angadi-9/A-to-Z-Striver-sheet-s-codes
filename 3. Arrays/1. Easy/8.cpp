// Linear Search -> Find the given element's index from the array
#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int element){
    for(int i=0; i<n; i++){
        if(arr[i] == element){
            return i;
            // break;
        }
    }
    return -1;
}

int main(){
    int arr[] ={1,2,3,4,5};
    int n = 5;
    int element = 40;

    int ans = linearSearch(arr, n, element);
    cout<<ans<<endl;
}

// TC: O(n)     SC: O(1)