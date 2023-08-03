//! Stock Buy And Sell
#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int n){
    int mini = INT_MAX;
    int profit = 0;
    for(int i=0; i<n; i++){
        mini = min(arr[i], mini);
        int diff = arr[i] - mini;
        profit = max(profit, diff);
    }
    return profit;
}

int main(){
    int arr[] ={7,1,5,3,6,4};
    int n = 6;

    cout<<maxProfit(arr, n);
}
