// Find the missing number in an array
#include<iostream>
using namespace std;

int findMissingNumber(int arr[], int n){
    int maxSum = (n*(n+1))/2;
    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum += arr[i];
    }
    int ans = maxSum - sum;
    return  ans;
}

int usingXOR(int arr[], int n){
    int xor1 = 0, xor2 = 0;

    for(int i=0; i<n-1; i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ n;

    return (xor1 ^ xor2);
}

int main(){
    int arr[] = {1,3};
    int n = 3;
    int ans = usingXOR(arr, n);
    cout<<ans<<endl;
}