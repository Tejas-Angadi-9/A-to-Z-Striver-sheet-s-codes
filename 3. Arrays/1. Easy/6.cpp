// Left rotate an array by D places
#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseElements(int arr[], int n, int d){
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
    print(arr, n);
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int d = 3;
    int n = 7;
    reverseElements(arr, n, d);
}

// TC: O(n) + O(n) = O(2n)
// SC: O(1)
