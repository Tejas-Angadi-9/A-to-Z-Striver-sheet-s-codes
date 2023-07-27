// Count Maximum Consecutive One’s in the array
#include<iostream>
using namespace std;

int solve(int arr[], int n){
    int count = 0;
    int maxCount = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
            maxCount = max(count, maxCount);
        }

        else
            count = 0;
    }
    return maxCount;
}

int main(){
    int arr[] = {1, 1, 0, 1, 1, 1};
    int n = 6;
    int ans = solve(arr, n);
    cout<<ans<<endl;
}
