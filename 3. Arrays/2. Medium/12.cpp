//! Rotate Image by 90 degree 

//! NOTE: This works when it is a square matrix i.e  n^2 -> n = m
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix){
    int n = matrix.size();

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i=0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main(){
    vector<vector<int>> matrix {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);

    for(auto it:matrix){
        for(auto ele: it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

//! TC: O(n*n) + O(n*n)     SC: O(1)