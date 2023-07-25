// Union of 2 sorted arrays
#include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m){
    vector<int> unionArr;
    int i= 0;
    int j = 0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            if(unionArr.size() == 0 || arr1[i] != unionArr.back()){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }

        else{
            if(unionArr.size() == 0 || arr1[j] != unionArr.back()){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n){
        if(unionArr.back() != arr1[i] || unionArr.size() == 0){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while(j < m){
        if(unionArr.back() != arr2[j] || unionArr.size() == 0){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    return unionArr;
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int n = 5;
    int arr2[] = {2,3,4,4,5};
    int m = 5;

      vector <int> Union = FindUnion(arr1, arr2, n, m);
      cout<<"Union of arr1 and arr2 is: "<<endl;
      for(auto &val: Union)
        cout<<val<<" ";
}